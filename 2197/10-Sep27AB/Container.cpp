#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   Container::Container() {
      set(0, maxCapacity);
#ifdef SDDS_DEBUG__
      cout << "Defaulted a Conteiner" << endl;
#endif // SDDS_DEBUG__
   }
   Container::~Container() {
#ifdef SDDS_DEBUG__
      cout << "Container with ";
      display() << " value is dying!" << endl;
#endif // SDDS_DEBUG__
   }
   Container::Container(int value) {
      set(value, maxCapacity);
#ifdef SDDS_DEBUG__
      cout << "Creating a container with ";
      display() << " value" << endl;
#endif // SDDS_DEBUG__
   }   
   Container::Container(int value, int capacity) {
      set(value, capacity);
#ifdef SDDS_DEBUG__
      cout << "Creating a container with ";
      display() << " value" << endl;
#endif // SDDS_DEBUG__
   }
   Container& Container::set(int data, int capacity) {
      if (data >= 0 && data <= capacity) {
         m_value = data;
         m_capacity = capacity;
#ifdef SDDS_DEBUG__
         cout << "Setting Conteiner to " << data << "/" << capacity << endl;
#endif // SDDS_DEBUG__
      }
      else {
         setToSafeEmptyState();
      }
      return *this;
   }

   Container& Container::set(int data) {
      if (data >= 0 && data <= m_capacity) {
         m_value = data;
#ifdef SDDS_DEBUG__
         cout << "Setting Conteiner to " << data << "/" << m_capacity <<endl;
#endif // SDDS_DEBUG__
      }
      else {
         setToSafeEmptyState();
      }

      return *this;
   }
   void Container::setToSafeEmptyState() {
#ifdef SDDS_DEBUG__
      cout << "Setting Conteiner to a safe empty state." <<endl;
#endif // SDDS_DEBUG__
      m_value = -1;
   }
   bool Container::isInEmptyState()const {
      return m_value < 0;
   }
   ostream& Container::display()const {
      if (isInEmptyState()) {
         cout << "Invalid Container object!";
      }
      else {
         cout << m_value << "/" << m_capacity;
      }
      return cout;
   }

}