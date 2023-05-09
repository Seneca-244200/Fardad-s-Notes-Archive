#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   {
      Student S;
      S.set("Fernando Soleimanov", 123123);
      S.show();
   }
   cout << "I am here!" << endl;
   return 0;
}
