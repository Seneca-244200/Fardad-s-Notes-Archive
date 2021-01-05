#include <iostream>
using namespace std;
#include "Employee.h"
#include "Professor.h"
using namespace sdds;
//Employee getEmployee() {
//   Employee emp;
//   cout << "Enter employee info: " << endl;
//   cin >> emp;
//   return emp;
//}
void getEmployee(Employee& emp) {
   cout << "Enter employee info: " << endl;
   cin >> emp;
}
void print(const Employee& E) {
   cout << "The entered employee info:" << endl
      << E << endl;
}
int main() {
   clog.setstate(ios::failbit);
   Employee E;
   getEmployee(E);
   print(E);
   return 0;
}


