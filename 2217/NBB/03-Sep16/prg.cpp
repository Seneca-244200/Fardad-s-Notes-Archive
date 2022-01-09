#include <iostream>
using namespace std;

void addTen(int& i);
void addTen(int* p);

int main() {
   int v = 30;
   addTen(v); // OOP
   cout << v << endl;
   addTen(&v); // IPC
   cout << v << endl;

   return 0;
}

void addTen(int& i) {
   i += 10;
}
void addTen(int* p) {
   (*p) += 10;
}


// next should be Crazy reference