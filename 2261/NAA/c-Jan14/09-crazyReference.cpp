#include <iostream>
using namespace std;
int& addTen(int& val) {
   val += 10;
   return val;
}

int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   int i = 20;
   cout << i << endl;
   addTen(i) += 100;// addTen(int& val = i);
   cout << i << endl;
   return 0;
}
