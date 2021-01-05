#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Container.h"
using namespace std;
namespace sdds {
   const bool debugging = false;
   Container& Container::correctValues() {
      if (m_capacity < 0) m_capacity = 250;
      if (m_content > m_capacity) m_content = m_capacity;
      if (m_content < 0) m_content = 0;
      return *this;
   }
   Container::Container(const char* name, int content, int capacity) {
      strcpy(m_name, name);
      m_capacity = capacity;
      m_content = content;
      correctValues();
      if (debugging) display() << " is created" << endl;
   }
   ostream& Container::display(ostream& coutRef)const {
      if (m_name[0])
         coutRef << m_name;
      else
         coutRef << "No Name";
      return coutRef << ": " << m_content << "cc/" << m_capacity;
   }
   std::istream& Container::read(std::istream& cinRef) {
      cout << "Please enter name: ";
      cinRef.get(m_name, 31);
      cinRef.ignore(1000, '\n');
      cout << "Capacity: ";
      cinRef >> m_capacity;
      cinRef.ignore(1000, '\n');
      cout << "Content: ";
      cinRef >> m_content;
      cinRef.ignore(1000, '\n');
      correctValues();
      return cinRef;
   }
   Container& Container::operator+=(int RO) {
      m_content += RO;
      // correcting the value of m_content if overflow
      correctValues();
      return *this;
   }

   Container& Container::operator=(const Container& ro) {
      m_content = ro.m_content;
      // the left opertand capacity and name should not change
      // correcting the value of m_content if overflow
      correctValues();
      return *this;
   }
   Container Container::operator+(const Container& ro)const {
      Container toBeReturned("Temp",
         ro.m_content + m_content,
         ro.m_capacity + m_capacity);
      return toBeReturned;
   }

   Container& Container::operator++() {
      m_content++;
      correctValues();
      return *this;
   }
   Container& Container::operator++(int) {
      m_content++;
      correctValues();
      return *this;
   }
   Container Container::operator--(int) {
      Container withOldContent = *this;
      m_content--;
      correctValues();
      return withOldContent;
   }

   bool Container::operator!() const {
      return m_content == 0;
   }

   Container::operator int() const {
      return m_content;
   }

   Container::operator bool()const {
      return m_content > 0;
   }

   Container::~Container() {
      if (debugging) display() << " is going out of scope" << endl;
   }




   int operator+=(int& lo, const Container& ro) {
      return lo += int(ro);
   }

   std::ostream& operator<<(std::ostream& coutRef, const Container& rightOper) {
      rightOper.display(coutRef);
      return coutRef;
   }

   std::istream& operator>>(std::istream& istr, Container& rightOper) {
      rightOper.read(istr);
      return istr;
   }

   double operator<<(double& fullness, const Container& ro) {
      return fullness = int(ro) / double(ro.m_capacity);
   }

}