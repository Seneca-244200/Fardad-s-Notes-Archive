#include <iostream>
using namespace std;
// explaining 01-cin.get.cpp code!!!!
int getint() {
   int val;
   cin >> val;
   return val;
}
void getint(int& val) {
   cin >> val;
}

int main() {
   int num;
   cout << "Enterint: ";
   num = getint();  // overload number 1
   cout << "num: " << num << endl;
   cout << "Enterint: ";
   getint(num);   // overload number 2
   cout << "num: " << num << endl;
   return 0;
}