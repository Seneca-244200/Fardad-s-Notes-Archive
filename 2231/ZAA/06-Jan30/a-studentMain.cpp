#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student T{ "Tiger Lion", 12345 };
   //Student T("Tiger Lion", 12345);
   Student S;
//   Student N(34567u);
//  Student N = 34567u;
   Student N{ 34567u };
//   Student R("Roger Waters");
   Student R = "Roger Waters";
   int i(100);
   T.show();
   R.show();
   N.show();
   S.set();
   S.show();
   S.set("Fernando Soleimanov", 123123);
   S.show();
   S.set("Fred Soley", 456456);
   S.show();
   R = S;
   return 0;
}