#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main() {
   Employee E;
   cout << "Maximum Empoloyees to hire: " 
      << max_no_of_employees << endl;
   hire(&E);
   hire(&E);
   hire(&E);
   hire(&E);
   cout << "Currenty employing " << curHiredEmployees() << endl;

   display(&E);
   return 0;
}