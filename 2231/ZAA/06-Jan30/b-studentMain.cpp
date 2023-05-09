#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student T{ "Tiger Lion", 12345 };
   T.show()<<endl;
   T.set("Fred Soley", 34567).show();
   cout << " has overwritten the Tiger Loin thingy." << endl;
   return 0;
}