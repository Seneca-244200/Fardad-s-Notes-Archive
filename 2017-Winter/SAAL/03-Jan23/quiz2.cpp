#include <iostream>
struct Employee;
using namespace std;
#include "sort.h"
int main() {
   // 2
   Employee* e = new Employee[50];
   delete[] e;
   // 3
   int num;
   cout << "num? ";
   cin >> num;
   double* d = new double[num];
   int i;
   for (i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> d[i];
   }
   sort(d, num);
   for (i = 0; i < num; i++) {
      cout << d[i] << " ";
   }
   delete[] d;
   return 0;
}