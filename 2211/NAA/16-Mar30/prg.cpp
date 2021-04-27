#include <iostream>
using namespace std;


int main() {
   int a=999, b=888;
   cin >> a;
   if (cin.fail()) {
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cin >> b;
   cout << a << " " << b << endl;

   return 0;
}





