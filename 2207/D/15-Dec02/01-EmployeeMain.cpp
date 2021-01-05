#include <iostream>
using namespace std;
#include "Employee.h"
#include "Professor.h"
using namespace sdds;
Employee getEmployee() {
   clog << "Employee getEmployee()" << endl;
   Employee E;
   cout << "Please Enter Employee information: " << endl;
   cin >> E;
   clog << "End <Employee getEmployee()>" << endl;
   return E;
}
void getEmployee(Employee& E) {
   clog << "void getEmployee(Empoloyee &)" << endl;
   cout << "Please Enter Employee information: " << endl;
   cin >> E;
   clog << "End <void getEmployee(Empoloyee &)>" << endl;
}
//void prnEmployee(Employee& E) {  // by reference
void prnEmployee(Employee E) {   // by value
   clog << "void prnEmployee(Employee E)" << endl;
   cout << "You entered the following employee: " << endl;
   cout << E << endl;
   clog << "End <void prnEmployee(Employee E)>" << endl;
}
int main() {
   clog.setstate(ios::failbit);
   Employee emp;
   emp = getEmployee();
   prnEmployee(emp);
   return 0;
}


