#include <iostream>
using namespace std;
int main() {
   int* a;
   a = new int; // dynamically allocated one object that is an integer
   *a = 5000;
   cout << *a << endl;
   delete a;   // delete one object that is an integer
   return 0;
}
