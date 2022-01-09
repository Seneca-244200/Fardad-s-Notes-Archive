#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

Name getName() {
#ifdef  SDDS_LIFETIME
   cout << "Starting getName()" << endl;;
#endif //  SDDS_LIFETIME
   
   Name name;
   cout << "Please enter your name: ";
   cin >> name;

#ifdef  SDDS_LIFETIME
   cout << "Ending getName() and returning " << name <<  endl;;
#endif //  SDDS_LIFETIME
   return name;
}

int main() {
#ifdef  SDDS_LIFETIME
   cout << "Starting main()"<< endl;;
#endif //  SDDS_LIFETIME
   Name A;
   A = getName();
   cout << "Hello " << A << endl;
#ifdef  SDDS_LIFETIME
   cout << "Ending main()" << endl;;
#endif //  SDDS_LIFETIME
   return 0;
}
