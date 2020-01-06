#include <iostream>
using namespace std;
#include "Box.h"

namespace sdds {
   Box::Box() {
      set(4, 4);
   }
   Box::Box(int side) {
      set(side, side);
   }
   bool Box::isEmpty()const {
      return m_width < 0 || m_height < 0;
   }
   void Box::setEmpty() {
      m_height = m_width = -1;
   }
   void Box::set(int height, int width) {
      if (height >= 2 && height <= 20)
         m_height = height;
      else
         setEmpty();
      if (width >= 2 && width <= 70)
         m_width = width;
      else
         setEmpty();
   }

   void Box::draw()const {
      if (!isEmpty()) {
         int i, j;
         for (i = 0; i < m_width; i++) {
            cout << "*";
         }
         cout << endl;
         for (j = 0; j < m_height - 2; j++) {
            cout << "*";
            for (i = 0; i < m_width - 2; i++) {
               cout << " ";
            }
            cout << "*" << endl;
         }
         for (i = 0; i < m_width; i++) {
            cout << "*";
         }
         cout << endl;
      }
      else {
         cout << "Invalid Box dimensions!" << endl;
      }
   }


}