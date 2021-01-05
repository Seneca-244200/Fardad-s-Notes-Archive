#include <iostream>
using namespace std;
#include "Employee.h"
#include "Professor.h"
using namespace sdds;

void getEmployee(Employee& emp) {
   cout << "Enter employee info: " << endl;
   cin >> emp;
}

Professor getEmployee() {
   Professor emp;
   cout << "Enter employee info: " << endl;
   cin >> emp;
   return emp;
}
void print(Professor E) {
   cout << "The employe info are :" << endl
      << E << endl;
}
int main() {
   //clog.setstate(ios::failbit);
   Professor E;
   E = getEmployee();
   //getEmployee(E);
   print(E);
   return 0;
}


