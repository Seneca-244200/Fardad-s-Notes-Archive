#include <iostream>
struct Student;

#include "sort.h"
using namespace std;
int main() {
   Student* S = new Student[100];
   delete[] S;
   int num;
   int* I;
   cout << "num: ";
   cin >> num;
   I = new int[num];
   int i;
   for (i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> I[i];
   }
   sort(I, num);
   for (i = 0; i < num; i++) {
      cout << (i + 1) << ": " << I[i] << endl;
   }
   delete[] I;
   return 0;
}