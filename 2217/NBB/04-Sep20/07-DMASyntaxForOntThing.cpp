#include <iostream>
using namespace std;
struct Employee {
   int id;
   double salary;
   int shifts[7];
   char image[50000000];
};

int main() {
   Employee* eptr;
   eptr = new Employee;
   if (eptr != nullptr) {
      // do youe business with the employee
      ///
      delete eptr;  // delete only deletes if a is not nullptr
   }
   else {
      cout << "out of memory" << endl;
   }
   return 0;
}
