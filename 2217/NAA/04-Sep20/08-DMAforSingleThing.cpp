#include <iostream>
using namespace std;
struct Employee {
   int id;
   double salary;
   int shifts[7];
   char image[5000000];
};

int main() {
   Employee* a;
   a = new Employee;
   if (a != nullptr) {
      // do youe business with the million integers
      ///
      delete a;  // delete only deletes if a is not nullptr
   }
   else {
      cout << "out of memory" << endl;
   }
   return 0;
}
