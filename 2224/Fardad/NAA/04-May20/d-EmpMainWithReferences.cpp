#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main() {
   Employee E{ "Jack", 123444.56, 12345 };
   cout << "Maximum Empoloyees to hire: "
      << max_no_of_employees << endl;
   cout << "Currenty employing " << curHiredEmployees() << endl;
   hire();
   display(E);
   return 0;
}