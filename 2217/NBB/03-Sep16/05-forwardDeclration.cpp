#include <iostream>
using namespace std;

struct Student; // forward Declaration for sturct or class
                // only for pointers and references

void prnStudent(const  Student* st);

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

struct Chicken;

struct Egg {
   Chicken* mother;
};

struct Chicken {
   Egg E;
};
