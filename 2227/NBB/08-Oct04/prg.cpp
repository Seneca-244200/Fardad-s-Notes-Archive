#include <iostream>
#include "Num.h"
using namespace std;
using namespace sdds;
int main() {
   Num N = 200;
   Num M;
   Num S;
   Num Z;
   int v;
   cout << N << endl;
   M = N + 20;
   S = M + N;
   cout << M << endl;
   cout << S << endl;
   v = 1400 - N;// since member is impossible, helpers are ok
   cout << v << endl;
   if(!Z) {
      cout << "the number is zero" << endl;
   }
   N = ++Z;
   cout << Z << endl;
   cout << N << endl;
   N = --Z;
   cout << Z << endl;
   cout << N << endl;
   
   N = M++;
   cout << M << endl;
   cout << N << endl;
   N = M--;
   cout << M << endl;
   cout << N << endl;
   return 0;
}