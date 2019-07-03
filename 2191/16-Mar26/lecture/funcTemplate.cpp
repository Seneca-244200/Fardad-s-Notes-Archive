#include <iostream>
#include <cstring>
using namespace std;
struct Name {
  char name[50];
  Name(const char n[]) { 
    strncpy(name, n, 49); 
    name[49] = 0; 
  }
  const bool operator>(const Name& N)const {
    return strcmp(name, N.name) > 0;
  }
};
ostream& operator<<(ostream& os, const Name& N) {
  return os << N.name;
}
template <typename T>
void swap(T* a, T* b) {
  T temp = *a;
  *a = *b;
  *b = temp;
}
template <typename T>
void bub_sort(T a[], int n ) {
  int i,j;
  for (i = 0; i < n; i++) { 
    for (j = 0; j < n - i - 1; j++) { 
      if (a[j] > a[j + 1]) {  
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}
template <typename T>
void print(const T a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}

int main() {
  double dvals[5] = { 1.1,3.3,2.4,5.6,4.1 };
  int ivals[7] = { 2,3,6,1,3,6,4 };
  Name nvals[6] = { "Darth Vader", "Princess Leia", "Luke Skywalker", "Obi-Wan Kenobi", "Han Solo","Chewbacca" };
  bub_sort(dvals, 5);
  print(dvals, 5);
  bub_sort(ivals, 7);
  print(ivals, 7);
  bub_sort(nvals, 6);
  print(nvals, 6);
  return 0;
}