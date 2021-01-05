#include <iostream>
using namespace std;
struct Employee {
   char name[41];
   char surname[81];
   double salary;
   int empno;
};


int main() {
   int* p;
   Employee* ep;
   p = new int[500];
   ep = new Employee[50];
   // do my work with p and ep

   delete[] p;
   delete[] ep;

   return 0;
}

