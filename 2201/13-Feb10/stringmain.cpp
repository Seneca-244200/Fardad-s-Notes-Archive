#include <iostream>
#include "string.h"
using namespace sdds;
using namespace std;

void print(String T) {
   T.print();
   cout << endl;
}

void print(int a) {
   cout << a << endl;
}

int main() {
   String S;
   String first;
   String last;
   String name;
   cout << "please enter your name: ";
   cin >> S;
   cout << "Hello " << S << " how are you?" << endl;
 //  name = first + " " + last;  make this work
   return 0;
}
