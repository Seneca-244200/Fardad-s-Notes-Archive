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

void getName(Name& name) {
#ifdef  SDDS_LIFETIME
   cout << "Starting getName()" << endl;;
#endif //  SDDS_LIFETIME

   cout << "Please enter your name: ";
   cin >> name;

#ifdef  SDDS_LIFETIME
   cout << "Ending getName() and returning " << name << endl;;
#endif //  SDDS_LIFETIME
}

void sayHello(const Name& name) {
#ifdef  SDDS_LIFETIME
   cout << "Starting sayHello()" << endl;;
#endif //  SDDS_LIFETIME
   cout << "Hello " << name << endl;
#ifdef  SDDS_LIFETIME
   cout << "Ending sayHello()" << endl;;
#endif //  SDDS_LIFETIME
}

//void sayHello(Name name) { // bad one
//#ifdef  SDDS_LIFETIME
//   cout << "Starting sayHello()" << endl;;
//#endif //  SDDS_LIFETIME
//   cout << "Hello " << name << endl;
//#ifdef  SDDS_LIFETIME
//   cout << "Ending sayHello()" << endl;;
//#endif //  SDDS_LIFETIME
//}

int main() {
   Name N;
   //N = getName();
   getName(N);
   sayHello(N);
   return 0;
}
