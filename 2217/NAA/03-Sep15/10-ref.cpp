#include <iostream>
using namespace std;

int main(){
   int i = 50;
   int& R = i;
   int* p;
   cout << i << endl;
   cout << R << endl;
   R = 20;
   cout << i << endl;
   i -= 2;
   cout << R << endl;
   p = &i;
   cout << unsigned(p) << endl;
   p = &R;
   cout << unsigned(p) << endl;
   return 0;
} 


