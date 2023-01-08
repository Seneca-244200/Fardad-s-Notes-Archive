#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

#include "Num.h"
using namespace std;
using namespace sdds;
int main() {
   Num N = 200;
   cout << N << endl;
   cout << ++N << endl;
   cout << N++ << endl;
   cout << N << endl;
   return 0;
}