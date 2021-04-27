#include <iostream>
//#include "Name.h"
#include "FullName.h"
using namespace sdds;
using namespace std;
int main() {
   //Name N = "Fred";
   //Name M = "Jack";
   //Name L = N; // copy const
   //M = N;
   //cout << M << endl;
   //cout << N << endl;
   //cout << L << endl;
   FullName fn1("John", "Doe");
   FullName fn2 = fn1; // copy const
   FullName fn3("Fred", "Soley");
   cout << fn1 << endl << fn2 << endl << fn3 << endl;
   fn1 = fn2 = fn3 = fn3; // copy assingment
   cout << fn1 << endl << fn2 << endl << fn3 << endl;
   fn1.display();
   return 0;
}