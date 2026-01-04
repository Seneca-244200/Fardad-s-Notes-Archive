#include <iostream>
#include "Frame.h"
using namespace std;
namespace seneca {
   void Frame::set( int width, int height, char fill) {
      m_ok = set(fill);
      if (m_ok) {
         m_height = height;
         m_width = width;
      }
   }
   Frame::Frame() {
      set(20, 10, '*');
   }
   Frame::Frame(int width, int height) {
      set(width, height, '*');
   }
   // modifier
   bool Frame::set(char fill) {
      char okOnes[] = "+-*#@$";
      bool ok = false;
      int i{}; // = 0;
      while (!ok && okOnes[i]) {
         if (fill == okOnes[i]) {
            ok = true;
         }
         i++;
      }
      if (ok) m_fill = fill;
      return ok;
   }
   //query
   void Frame::draw()const {
      if (m_ok) {
         for (int i = 0; i < m_width; i++) {
            cout << m_fill;
         }
         cout << endl;
         for (int h = 0; h < m_height - 2; h++) {
            cout << m_fill;
            for (int i = 0; i < m_width - 2; i++) {
               cout << " ";
            }
            cout << m_fill << endl;
         }
         for (int i = 0; i < m_width; i++) {
            cout << m_fill;
         }
         cout << endl;
      }
      else {
         cout << "Bad frame!" << endl;
      }
   }
   // query
   bool Frame::isValid() const {
      return m_ok;
   }


}