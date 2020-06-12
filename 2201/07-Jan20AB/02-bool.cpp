#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
   int a[5] = { 1,0, 4, 0, -3 };
   int cnt = 0;
   int cntZero = 0;
   int cntLessThan2 = 0;
   for (int i = 0; i < 5; i++) {
      cnt += !!a[i];
      cntZero += !a[i];
      cntLessThan2 += a[i] < 2;
   }

   cout << cnt << endl;
   cout << cntLessThan2 << endl;
   cout << cntZero << endl;

   return 0;
}