#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;
int main() {
   Student S = { "Fred", 123456, 1234.56 };
   S.display();
   cout << "And the min monthly payment is: " << MinMonPayment << endl;
   MinMonPayment = 30.50;
   cout << "And now the min monthly payment is: " << MinMonPayment << endl;
   return 0;
}
