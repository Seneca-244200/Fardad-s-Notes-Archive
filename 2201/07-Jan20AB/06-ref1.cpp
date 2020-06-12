#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
 /*  int fardad;
   int& freddie = fardad;*/
   int i = 10;
   int& r = i;
   // int& R;  // error no reference without already existing thing to refer to
   cout <<"i: " << i << endl;
   cout <<"r: " <<  r << endl;
   r = 300;
   cout << "i: " << i << endl;
   cout << "r: " << r << endl;
   cout << "&i: " << &i << endl;
   cout << "&r: " << &r << endl;
   return 0;
}