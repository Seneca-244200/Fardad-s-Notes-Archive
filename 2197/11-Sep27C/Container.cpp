#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   Container::~Container() {
#ifdef SDDS_DEBUG__
      cout << "Container with ";
      display() << " value is dying!" << endl;
#endif // SDDS_DEBUG__
   }
//   Container::Container() {
//      set(0, maxCapacity);
//#ifdef SDDS_DEBUG__
//      cout << "Defaulted a Container to ";
//      display() << endl;
//#endif // SDDS_DEBUG__
//   }
   Container::Container(int value) {
      set(value, maxCapacity);
#ifdef SDDS_DEBUG__
      cout << "Creating a container with ";
      display() << " value." << endl;
#endif // SDDS_DEBUG__
   }

   Container::Container(int value, int capacity) {
      set(value, capacity);
#ifdef SDDS_DEBUG__
      cout << "Creating a container with ";
      display() << " value." << endl;
#endif // SDDS_DEBUG__
   }


   void Container::set(int value) {
      if (value >= 0 && value <= m_capacity) {
         m_value = value;
      }
      else {
         set2SafeEmptyState();
      }
   }
   void Container::set(int value, int capacity) {
      if (capacity >= value && capacity <= maxCapacity) {
         if (value >= 0 && value <= capacity) {
            m_value = value;
            m_capacity = capacity;
         }
         else {
            set2SafeEmptyState();
         }
      }
      else {
         set2SafeEmptyState();
      }
   }
   void Container::set2SafeEmptyState() {
      m_value = -1;
   }
   bool Container::isInSafeEmptyState()const {
      return m_value < 0;
   }
   ostream& Container::display()const {
      if (isInSafeEmptyState()) {
         cout << "Invalid Container Object!";
      }
      else {
         cout << m_value << "/" << m_capacity;
      }
      return cout;
   }
}