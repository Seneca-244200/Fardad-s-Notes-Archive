#include <iostream>
using namespace std;

struct Student; // forward Declaration for sturct or class
                // only for pointers and references

void prnStudent(const Student* st);

struct Student {
   char name[81];
   int stNo;
   double balance;
};

struct Employee {
   int empno;
   double salary;
};
int main() {
   Student S = { "Fred", 123456, 1234.56 };
   auto i = 0; 
   auto j = false;
   auto B = S;  // Student B = S;
   auto x = &i;
   auto y = &S; // compile time not run time

   //Only in quiz not in coding in oop244.

   return 0;
}

void prnStudent(const Student* st) {
   cout << st->name << " ," << st->stNo <<
      ", osap loan: " << st->balance << endl;
}
