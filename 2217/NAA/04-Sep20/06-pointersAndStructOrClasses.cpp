#include <iostream>
using namespace std;
struct Employee {
   int id;
   double salary;
   int shifts[7];
};


int main() {
   Employee E;
   Employee* p;

   p = &E;


   (*p).shifts[3] = 34;

   p->shifts[3] = 34;

   return 0;
}
