
#include <iostream>
using namespace std;
void readInt(int& val) {
   cout << "Value: ";
   cin >> val;
}
int main() {
   int a;
   int& b = a;
   readInt(a);
   cout << b << endl;
   cout << unsigned(&a) << "/" << unsigned(&b) << endl;
   return 0;
}