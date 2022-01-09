#ifndef  SDDS_SORT_H
#define  SDDS_SORT_H
namespace sdds {

   /*
   // Copy Construct
   // Copy Assignment
   */
   template <typename T>
   void swap(T* a, T* b) {
      T temp = *a;  // Copy Construct
      *a = *b;       // Copy Assignment
      *b = temp;
   }



   /*
   86, address is passed nothing is needed here
   88, nothing
   91, operator >
   */
   template <class type> // class here works exactly as typename
   void sort(type* list, long n) {
      long c, d;
      for (c = 0; c < n - 1; c++) {
         for (d = 0; d < n - c - 1; d++) {
            if (list[d] > list[d + 1]) {
               swap(list[d], list[d + 1]);
            }
         }
      }
   }
}
#endif // ! SDDS_SORT_H
