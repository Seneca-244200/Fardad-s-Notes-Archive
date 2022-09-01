
#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;

int main() {
   Employee E;
   hire(E);
   display(E);
   cout << "No of Employees: " << curHiredEmployees() << endl;
   return 0;
}


