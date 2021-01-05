#include <iostream>
using namespace std;
struct Employee {
   char name[41];
   char surname[81];
   double salary;
   int empno;
};

int main() {
   Employee* emp;
   int cnt;
   cout << "How many Employees you want to enter? ";
   cin >> cnt;
   emp = new Employee[cnt];

   delete[] emp;
   return 0;
}