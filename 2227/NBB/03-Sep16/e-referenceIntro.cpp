#include <iostream>
using namespace std;
int main() {
   int val = 20;
   int& age = val;
   cout << unsigned(&val) << endl;
   cout << unsigned(&age) << endl;
   cout << age << " " << val << endl;
   age = 40;
   cout << age << " " << val << endl;
   val = 100;
   cout << age << " " << val << endl;
   return 0;
}