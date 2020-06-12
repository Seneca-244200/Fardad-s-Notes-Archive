#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void addOne(int& r) {
   r++;
}

int& WhatTheHeck(int& r) {
   return r;
}
int main() {
   int i = 10;
   addOne(i);
   cout << i << endl;
   WhatTheHeck(i) = 234;
   cout << i << endl;
   cout << &WhatTheHeck(i) << endl;
   cout << &i << endl;
   return 0;
}