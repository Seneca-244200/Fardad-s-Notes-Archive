#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student R = 12345;
   Student S = "Fred Soley";
   int i(200);
   R.display();
   S.display();
   cout << i << endl;
   return 0;
}
