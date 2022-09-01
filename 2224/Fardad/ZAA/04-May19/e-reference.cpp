#include <iostream>

using namespace std;

void Ten(int& R) {
   R = 10;
}
void readInt(int& val) {
   cout << "Enter an int: ";
   cin >> val;
}

int main() {
   int a = 34;
   cout << a << endl;
   Ten(a);   // Ten(int& R = a){ .....
   cout << a << endl;
   readInt(a);  // readInt(int& val = a) {.....
   cout << a << endl;


   return 0;
}