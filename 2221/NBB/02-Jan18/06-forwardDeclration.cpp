#include <iostream>
using namespace std;

struct Student;   // like a prototype for a function but it is for a sturctrue
                  // forward declration.  (can only be done for addresses (and reference) of a student


void prnStudent(const Student* st);

struct Student {
   char name[81];
   int stNo;
   double balance;
};


int main() {
   Student S = { "Fred", 123456, 1234.56 };
   prnStudent(&S);
   return 0;
}


void prnStudent(const Student* st) {
   cout << st->name << " ," << st->stNo <<
      ", osap loan: " << st->balance << endl;
}
