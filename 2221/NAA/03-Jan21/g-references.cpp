#include <iostream>
using namespace std;

void addTen(int* valptr){
   (*valptr) += 10;
}

void addTen(int& R) {
   R += 10;
}



int main() {
   int x = 20;
   
   addTen(&x);    // addTen(int* valptr = &x);

   cout << x << endl;

   addTen(x);    // addTen(int& R = x); R becomes a new name for the x variable

   cout << x << endl;

   return 0;
}