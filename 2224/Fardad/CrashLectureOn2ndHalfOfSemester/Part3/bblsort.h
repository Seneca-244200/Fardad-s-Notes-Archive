#pragma once
namespace sdds {
   /*
   * type must support the following
   copyable
   assignable
   operator<
   operator>
   
   */
   template <typename T>
   void swap(T& a, T& b) {
      T tmp = a; // copy consturctor
      a = b;     // copy assignment
      b = tmp;
   }

   template <class type>
   void sort(type a[], int n, bool desc = true) {
      int i = 0, j = 0;
      for (i = 0; i < n; i++) {
         for (j = 0; j < n - i - 1; j++) {
            if (desc) {
               if (a[j] < a[j + 1]) { // operator<
                  swap(a[j], a[j + 1]);
               }
            }
            else {
               if (a[j] > a[j + 1]) { // operator>
                  swap(a[j], a[j + 1]);
               }
            }
         }
      }
   }
}