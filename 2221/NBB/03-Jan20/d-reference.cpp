#include <iostream>
using namespace std;
void readInt(int& value) {
   cout << "Enter an integer: ";
   cin >> value;
}
void readInt(int* value) {
   cout << "Enter an integer: ";
   cin >> *value;
}
// in any case or shape "C++ references" 
// are new names (or references of) already exisiting things

int main() {
   int a = 20;
   int b;
   int& r = a;
   // int& x; references must be initialized
   cout << r << endl;
   r = 50;
   cout << a << endl;
   readInt(a);   // readInt(int& value = a); how the function is called
   cout << "a: " << a << endl;
   readInt(b);   // readInt(int& value = b); how the function is called
   cout << "b: " << b << endl;
   // doing it in good old C way:
   readInt(&a);   // readInt(int* value = &a); how the function is called
   cout << "a: " << a << endl;
   readInt(&b);   // readInt(int* value = &b); how the function is called
   cout << "b: " << b << endl;

   return 0;
}
