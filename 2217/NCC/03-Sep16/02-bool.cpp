// integral
// bool, char, short, int, long, long long
// Real number (floating point)
// float, double, long double
#include <iostream>
using namespace std;
int main(){
   bool res = true;
   int a = 25;
   cout << true << endl;
   cout << false << endl;
   cout << "res: " << res << endl;
   res = !res;
   cout << "res: " << res << endl;
   res = a;  // set to 25
   cout << "res: " << res << endl;
   res = !a;
   cout << "res: " << res << endl;
   res = !!a;
   cout << "res: " << res << endl;
   cout << !!a << endl;
   return 0;
} 

