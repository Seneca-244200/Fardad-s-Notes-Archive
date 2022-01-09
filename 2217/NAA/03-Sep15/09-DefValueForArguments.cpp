
#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;


void line( int len = 70, char fill = '-');


int main(){
   line(20,'*');
   line(40);
   line();
   return 0;

} 


void line( int len, char fill) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}
