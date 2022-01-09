#include <iostream>
using namespace std;
int main() {
   //int& ref; // this is an error, a reference must be initialized
   int i = 50;
   int& R = i;    // type + &     type reference
   int& S = R;
   int* p;        // type + *     type pointer
   cout << i << endl;
   R = 40;
   cout << i << endl;
   S += 5;
   cout << S << " " << R << " " << i  << endl;
   p = &R;
   cout << unsigned(p) << endl;
   p = &i;
   cout << unsigned(p) << endl;
   p = &S;
   cout << unsigned(p) << endl;
   return 0;
}