#include <iostream>
using namespace std;


struct Student;

void dispStudent(const Student* sp);

struct Student {
   char name[81];
   int stNo;
   double balance;
};


int main() {
   Student S = { "Fred", 123456, 1234.56 };
   auto A = S;
   auto i = 0;
   auto d = 2.4;
   dispStudent(&S);
   return 0;
}
void dispStudent(const Student* sp) {
   cout << "Name: " << sp->name << endl;
   cout << "Student Number: " << sp->stNo << endl;
   cout << "Account Balance: " << sp->balance << endl;
}
