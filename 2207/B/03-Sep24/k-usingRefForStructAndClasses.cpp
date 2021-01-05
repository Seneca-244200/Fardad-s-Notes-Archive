#include <iostream>
using namespace std;

struct Student;

void dispStudent(const Student& sp);

struct Student {
   char name[81];
   int stNo;
   double balance;
};


int main() {
   Student S = { "Fred", 123456, 1234.56 };
   dispStudent(S);
   return 0;
}
void dispStudent(const Student& SR) {
   cout << "Name: " << SR.name << endl;
   cout << "Student Number: " << SR.stNo << endl;
   cout << "Account Balance: " << SR.balance << endl;
}
