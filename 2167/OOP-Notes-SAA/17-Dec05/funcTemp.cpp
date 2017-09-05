#include <iostream>
using namespace std;

struct Mark {
   char name[21];
   int value;
   bool operator<(const Mark& M) {
      return value < M.value;
   }
};

double operator+=(double& d, const Mark& M) {
   return d += M.value;
}

template <typename T>
double avr(T a[], int size) {
   int i;
   double av = 0.0;
   for (i = 0;i < size;i++) {
      av += a[i];
   }
   return av / size;
}

template <typename T>
T max(T a, T b) {
   return a < b ? b : a;
}

int main() {
   double d;
   d = max(2.3, 4.5);
   int i;
   i = max(10, 20);


   return 0;
}