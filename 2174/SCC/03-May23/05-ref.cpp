#include <iostream>
using namespace std;

void addTen(int& a) {
   a += 10;
}

int main() {
   int i = 20;
   int j = 40;
   int& counter = i;
   while (counter--) {
      cout << counter << ", ";
   }
   cout << endl;
   cout << i;
   cout << endl;
   addTen(i);
   cout << i;
   cout << endl;
   addTen(j);
   cout << j;
   cout << endl;
   return 0;
}