#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
Name getName() {
   Name temp;
   cout << "Please enter your name: ";
   cin >> temp;
   return temp;
}


int main() {
   Name N;
   N = getName();
   cout << N << endl;
   return 0;
}

