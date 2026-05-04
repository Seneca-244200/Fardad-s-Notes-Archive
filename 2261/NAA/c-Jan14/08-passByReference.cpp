#include <iostream>
using namespace std;
void addTen(int& val) {
   val += 10;
}
void addTen(int* valPtr) {
   (*valPtr) += 10;
}
int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   int i = 20;
   cout << i << endl;
   addTen(i);// addTen(int& val = i);
   cout << i << endl;
   addTen(&i); // addTen(int* vallPtr =&i);
   cout << i << endl;
   return 0;
}
