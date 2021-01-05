#include <iostream>
using namespace std;
#include "Employee.h"
#include "Professor.h"
using namespace sdds;

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
   Professor E;
   getEmployee(E);
   print(E);
   return 0;
}


