#include <iostream>

void swap(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int a[], int size){
  int i;
  int j;
  for (i = 0; i < (size - 1); i++){
    for (j = 0; j < size - i - 1; j++){
      if (a[j] > a[j + 1]){
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}
