#include <iostream>
using namespace std;
#include "Employee.h"
#include "Professor.h"
using namespace sdds;

Professor getProfessor() {
   Professor emp;
   cout << "Enter employee info: " << endl;
   cin >> emp;
   return emp;
}
void print(const Professor E) {
   cout << "The entered employee info:" << endl
      << E << endl;
}
int main() {
   //clog.setstate(ios::failbit);
   Professor E;
   E = getProfessor();
   print(E);
   return 0;
}


