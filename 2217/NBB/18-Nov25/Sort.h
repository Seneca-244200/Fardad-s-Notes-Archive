/***********************************************************************
// Sorting Template
// File	sort.h
// Version 1.0
// Date	2021/11/25
// Author	Fardad Soleimanloo
// Description
// Template requrements
// The templated type should comply and emplement the rule of three
// binary operator> should works with template type (   type() > type() ) 
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/
#ifndef  SDDS_SORT_H
#define  SDDS_SORT_H
namespace sdds {
   template <typename T>
   void swap(T* a, T* b) {
      T temp = *a;  
      *a = *b;      
      *b = temp;
   }
   template <class type> // class here works exactly as typename
   void sort(type* list, long n) {
      long c, d;
      for (c = 0; c < n - 1; c++) {
         for (d = 0; d < n - c - 1; d++) {
            if (list[d] > list[d + 1]) {
               swap(&list[d], &list[d + 1]);
            }
         }
      }
   }
}


#endif // ! SDDS_SORT_H
