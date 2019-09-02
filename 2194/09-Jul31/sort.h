#ifndef SICT_SORT_H__
#define SICT_SORT_H__
template <class type>
void swap(type* a, type* b) {
  type temp = *a;
  *a = *b;
  *b = temp;
}
template <class type>
void sort(type a[], int size, bool ascending = true) {
  int i;
  int j;
  for (i = 0; i < (size - 1); i++) {
    for (j = 0; j < (size - i - 1); j++) {
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

#endif