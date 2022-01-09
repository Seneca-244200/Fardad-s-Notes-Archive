#include <iostream>
using namespace std;
struct Employee {
   int id;
   double salary;
   int shifts[7];
   char image[50000000];
};
int main() {
   Employee* ptr = nullptr;
   Employee* aptr = nullptr;
   ptr = new Employee;
   aptr = new Employee[10];
   if (ptr != nullptr) {
      // do your business with the Employee object

      delete ptr;
      ptr = nullptr;
   }
   else {
      cout << "Out of memory!" << endl;
   }
   if (aptr != nullptr) {
      // do your business with the Employee Array

      delete[] aptr;
      aptr = nullptr;
   }
   else {
      cout << "Out of memory!" << endl;
   }
}