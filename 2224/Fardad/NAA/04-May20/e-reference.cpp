#include <iostream>
using namespace std;

// type  A;
// type*  ptr;  ptr is pointer
// typy& ref = A; ref is referenct to the Variable A; ref and A are the same; 

void AddTen(int& R) {
   R += 10;
}

int main() {
   int A = 100;
   int B = 50;

   AddTen(A); // AddTen(int& R = A);
   AddTen(B); // AddTen(int& R = B);

   cout << A << endl;
   cout << B << endl;

   return 0;
}

// Fe , Felipe