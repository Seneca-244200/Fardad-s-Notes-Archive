#ifndef SDDS_SORT_H__
#define SDDS_SORT_H__



template <typename T>
void swap(T* a, T* b) {
   T temp = *a;
   *a = *b;
   *b = temp;
}

template <typename T>
void sort(T a[], int size, bool ascending = true) {
   int i;
   int j;
   for (i = 0; i < (size - 1); i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (ascending) {
            if (a[j] > a[j + 1]) {
               swap(&a[j], &a[j + 1]);
            }
         }
         else {
            if (a[j] < a[j + 1]) {
               swap(&a[j], &a[j + 1]);
            }
         }
      }
   }
}
#endif // !SDDS_SORT_H__

