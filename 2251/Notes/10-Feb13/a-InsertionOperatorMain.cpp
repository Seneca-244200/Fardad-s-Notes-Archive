#include <iostream>
#include "Container.h"
using namespace std;
using namespace seneca;
int main( ) {
   Container A, B( 30 );

   // Container Container::operator+(int value);
   A = B + 3;
   // A = B.operator+(3)

   cout << "The value of A after A = B + 3 is " << A << endl;

   A = 40 + B;
   // helper operator overload

   //1 : cout << "The value of A after A = B + 3 is " executed
   //    "The value of A after A = B + 3 is " is printed
   //    cout.operator<<() returns *this that is cout
   //2 : therefore the statement is change to:
   //    cout << A << endl;
   //3 : cout << A << endl; will be executed
   //    helper operator<<(cout,A) will be called 
   //    the A objec is displayed, printed, etc
   //    the operator<< will return refernce of cout to continue the cascade effect
   //    therefore the statement is changed to:
   //    cout << endl;
   //    which prints a new line( goes to new line)

   cout << "The value of A after A = B + 3 is " << A << endl;

   clog << A << endl;
   cerr << A << endl;

   return 0;
}