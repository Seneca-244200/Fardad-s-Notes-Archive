#include <iostream>
#include "Container.h"
using namespace std;
using namespace seneca;
int main( ) {
   Container A, B;
   
   cout << "What is the value of the containers?" << endl;
   cin >> A >> B;

   cout << "You entered: " << A << " and " << B << endl;
       
   return 0;
}