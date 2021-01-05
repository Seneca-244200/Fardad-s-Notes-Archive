#include <iostream>
using namespace std;


struct Student {
   char name[81];
   int stNo;
   double balance;
};


int main() {
   double* d; 
   d = new double[20];
   // work wit them...
   delete[] d;
   Student* sp;
   sp = new Student;
   // work with that student
   delete sp;
   sp = new Student[500];
   // work with the students....
   delete[] sp;
   return 0;
}

