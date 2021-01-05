#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Container.h"
using namespace std;
namespace sdds {
   const bool debugging = false;
   void Container::correctValues() {
      if (m_capacity < 0) m_capacity = 250;
      if (m_content > m_capacity) m_content = m_capacity;
      if (m_content < 0) m_content = 0;
   }
   Container::Container(const char* name, int content, int capacity) {
      strcpy(m_name, name);
      m_capacity = capacity;
      m_content = content;
      correctValues();
      if (debugging) display() << " is created" << endl;
   }
   ostream& Container::display()const {
      return cout << m_name <<": " << m_content << "cc/" << m_capacity;
   }
   istream& Container::read() {
      cout << "Please enter name: ";
      cin.get(m_name, 30);
      cin.ignore(1000, '\n');
      cout << "Capacity: ";
      cin >> m_capacity;
      cin.ignore(1000, '\n');
      cout << "Content: ";
      cin >> m_content;
      cin.ignore(1000, '\n');
      return cin;
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
                             ro.m_content+m_content,
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
      if(debugging) display() << " is going out of scope" << endl;
   }
   
   int operator+=(int& leftOp, const Container& rightOper) {
      leftOp += int(rightOper);
      return leftOp;
   }
   double operator+=(double& leftOp, const Container& rightOp) {
      return leftOp = int(rightOp) / double(rightOp.m_capacity);
   }

   ostream& operator<<(ostream& ostr, const Container& rightOp) {
      return rightOp.display();
   }

   istream& operator>>(istream& istr, Container& rightOp) {
      return rightOp.read();
   }


}