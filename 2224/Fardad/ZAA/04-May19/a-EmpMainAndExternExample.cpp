#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;
int main() {
   cout << "Max number of employees: " 
      << sdds::max_no_of_employees << endl;
   cout << "Current # of employees: "
// not extern anymore      << cur_no_of_employees << endl;
        << curNoOfEmployees() << endl;


   return 0;
}