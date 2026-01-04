#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;
int main( ) {
   Name red = "red";
   Name F;

   F = 'F' + red;
// F = 'F'.operator(red) which is impossible because 'F' is not a class
// F = operator+(char leftOperand, const Name& rightOperand);
   cout << F << " is " << int(F) << " characters long!" << endl;
// ostream& operator<<(ostream& ostr, const Name& right)

   cout << "What is your name?\n> ";
   cin >> F;
   cout << "Hello " << F << " how are you?" << endl;


   return 0;
}