#ifndef SDDS_SORT_H__
#define SDDS_SORT_H__
namespace sdds {
   /*
   T must be copy-able
   T must be assign-able to another T
   T must be comparable to another T using operator >
   T must be comparable to another T using operator <
   */
   template <typename T>
   void swap(T& a, T& b) {
      T temp = a;
      a = b;
      b = temp;
   }
   template <typename type>
   void sort(type a[], int size, bool ascending = true) {
      int i;
      int j;
      for (i = 0; i < (size - 1); i++) {
         for (j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (a[j] > a[j + 1]) {
                  swap(a[j], a[j + 1]);
               }
            }
            else {
               if (a[j] < a[j + 1]) {
                  swap(a[j], a[j + 1]);
               }
            }
         }
      }
   }
}
#endif 