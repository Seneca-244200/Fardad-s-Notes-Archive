#include <iostream>
using namespace std;
int main() {
   char abc[81] = "abc";
   double dbl = 123.4567;
   int i = 123;
   cout << abc << "," << dbl << "," << i << endl;
   cout << "Enter string double and int: ";
   cin >> abc >> dbl >> i;
   cout << abc << "," << dbl << "," << i << endl;
   return 0;
}