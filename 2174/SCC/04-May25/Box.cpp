#include "Box.h"
#include <cstring>
#include <iostream>
using namespace std;
namespace sict {
   void setBox( Box& B, const char title[], int height, int width) {
      strncpy(B.m_title, title, 40);
      B.m_title[40] = char(0);
      B.m_height = height;
      B.m_width = width;
   }

   void displayBox(const  Box& B) {
      int i, j;
      cout << B.m_title << endl;
      for (i = 0; i < B.m_width; i++) {
         cout << "*";
      }
      cout << endl;
      for (j = 0; j < B.m_height; j++) {
         cout << "*";
         for (i = 0; i < B.m_width - 2; i++) {
            cout << " ";
         }
         cout << "*" << endl;
      }
      for (i = 0; i < B.m_width; i++) {
         cout << "*";
      }
      cout << endl;
   }
};