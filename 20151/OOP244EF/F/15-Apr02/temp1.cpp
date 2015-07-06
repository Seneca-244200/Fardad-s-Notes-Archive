#include <iostream>
using namespace std;

template <typename Type>
void swap(Type* a, Type* b){
  Type temp = *a;
  *a = *b;
  *b = temp;
}
template <typename Type>
void sort(Type a[], int size, bool ascending = true){
  int i;
  int j;
  for (i = 0; i < (size - 1); i++){
    for (j = 0; j < size - i - 1; j++){
      if (ascending){
        if (a[j] > a[j + 1]){
          swap(&a[j], &a[j + 1]);
        }
      }
      else{
        if (a[j] < a[j + 1]){
          swap(&a[j], &a[j + 1]);
        }
      }
    }
  }
}

int main(){
  int i;
  int x[5] = { 1, 5, 3, 10, 2 };
  double y[6] = { 1.1, 5.2, 3.3, 10.4, 2.5, 4.5 };
  sort(x, 5);
  sort(y, 6, false);
  for (i = 0; i < 5; i++){
    cout << x[i] << endl;
  }
  for (i = 0; i < 6; i++){
    cout << y[i] << endl;
  }
  return 0;
}