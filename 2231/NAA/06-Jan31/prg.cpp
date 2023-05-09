#include <iostream>
#include "Student.h" 
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   Student S = "Jack";
   S.display() << endl;
   S.set("Homer", 12345).display();
   cout << " has overwritten jack!" << endl;
   
   return 0;
}
