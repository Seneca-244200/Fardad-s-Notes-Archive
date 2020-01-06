
#include <iostream>
using namespace std;
#include "Box.h"
namespace sdds {
   Box::Box() {
      set(5, 5);
   }
   Box::Box(int side) {
      set(side, side);

   }
   Box::~Box() {
      cout << m_width << "x" << m_height << "is dying!" << endl;
   }
   Box::Box(int width, int height) {
      set(width, height);
   }
   void Box::sides()const {
      cout << "* ";
      for (int i = 0; i < m_width - 2; i++, cout << "  ");
      cout << "*" << endl;
   }
   void Box::hrline()const {
      cout << "*";
      for (int i = 0; i < m_width - 1; i++) {
         cout << " *";
      }
      cout << endl;
   }

   bool Box::isEmpty()const {
      return m_width < 0 || m_height < 0;
   }
   void Box::setEmpty() {
      m_height = m_width = -1;
   }
   void Box::draw() const{
      if (!isEmpty()) {
         hrline();
         for (int j = 0; j < m_height - 2; j++) {
            sides();
         }
         hrline();
      }
      else {
         cout << "Invalid Box Dimensions!" << endl;
      }
   }
   void Box::set(int width, int height) {
      if (width <= 70 && width >= 3) {
         m_width = width;
      }
      else {
         setEmpty();
      }
      if (height <= 20 && height >= 3) {
         m_height = height;
      }
      else {
         setEmpty();
      }
   }

}