
#include <iostream>
#include "Teacher.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "Hello OOP" << 244 << "ZAA" << endl;
   Teacher T;
   setTeacher(&T, "OOP244", "Fred Soley", 4, 'B');
   printTeacher(&T);
   return 0;
}