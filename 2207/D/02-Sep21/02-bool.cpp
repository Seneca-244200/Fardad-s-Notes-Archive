#include <iostream>
using namespace std;
int main() {
   int a;
   a = 10 > 20;
   if (a) {
      cout << "This is true." << endl;
   }
   else {
      cout << "This is false." << endl;
   }
   cout << a << endl;
   return 0;
}
