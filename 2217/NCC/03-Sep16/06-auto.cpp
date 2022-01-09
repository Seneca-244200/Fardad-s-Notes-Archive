#include <iostream>
using namespace std; 

struct Student;

void prnStudent(const  Student* st);

struct Student {
   char name[81];
   int stNo;
   double balance;
};

int main() {
   Student S = { "Fred", 123456, 1234.56 };
   auto PI = 3.14159265;// PI will be of type double
   auto A = S; // A will be of type Student
   auto P = &S; // P will be of type pinter of student

   prnStudent(&S);
   return 0;
}


void prnStudent(const Student* st) {
   cout << st->name << " ," << st->stNo << ", osap loan: " << st->balance << endl;
}

