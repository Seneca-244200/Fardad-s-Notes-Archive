#include <iostream>
using namespace std;
// forward declaration
struct Student; // can only be used for pointers and references

void prnStudent(const Student* st);

struct Student {
   char name[81];
   int stNo;
   double balance;
};

int main(){
   Student S = { "Fred", 123456, 1234.56 };
   // you are not allowed to use it in OOP244
   auto i = 0;  // i will be of type int
   auto as = S;  // as will be of type Student
   auto sp = &S; // sp will be of type Student*
   prnStudent(&S);
   return 0;
}

void prnStudent(const Student* st) {
   cout << st->name << " ," << st->stNo << ", osap loan: " << st->balance << endl;
}