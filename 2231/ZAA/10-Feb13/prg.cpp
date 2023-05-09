#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
void print(String S) {
   cout << S << endl;
}

String get() {
   String temp;
   cin >> temp;
   return temp;
}
int main() {
   String name = "Homer simpson!";
   print(name);  // print(String S = name);
   cout << "Name: ";
   //cin >> name;
   name = get();
   cout << "Hello " << name << endl;
   return 0;
}