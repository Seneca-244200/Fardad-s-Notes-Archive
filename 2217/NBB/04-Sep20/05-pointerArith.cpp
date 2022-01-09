// uncomment the lines 5 and 6 and do it as a walkthrough challenge.
#include <iostream>
using namespace std;
struct Employee {
   double salary;
   int id;
   int age;
};
int& foo(int& i) {
//   cout << i << endl;
//   i += 10;
   return i;
}

int main() {

   Employee* p = (Employee*)32;
   cout << (unsigned)p << endl;
   p++;
   cout << (unsigned)p << endl;

   return 0;
}

