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

void swap(double* a, double* b) {
  double temp = *a;
  *a = *b;
  *b = temp;
}
void bub_sort(double a[], int n ) {
  int i,j;
  for (i = 0; i < n; i++) { 
    for (j = 0; j < n - i - 1; j++) { 
      if (a[j] > a[j + 1]) {  
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}

void print(const double a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}

int main() {
  double dvals[5] = { 1.1,3.3,2.4,5.6,4.1 };
  bub_sort(dvals, 5);
  print(dvals, 5);
  return 0;
}