#include <iostream>
using namespace std;
#include "Employee.h"
#include "Professor.h"
using namespace sdds;
void print(Professor Prof) {
   cout << "My Prof info are: " << endl;
   cout << Prof << endl;
}
void prnEmployee(Employee& E) {  // by reference
//void prnEmployee(Employee E) {   // by value
   clog << "void prnEmployee(Employee E)" << endl;
   cout << "You entered the following employee: " << endl;
   cout << E << endl;
   clog << "End <void prnEmployee(Employee E)>" << endl;
}
int main() {
   clog.setstate(ios::failbit); // comment to activate the log
   Professor P;
   cout << "Enter Prof info: " << endl;
   cin >> P;
   print(P);
   prnEmployee(P);
   return 0;
}


