#include <iostream>
using namespace std;


int main() {
   int A = 100;
   int& R = A;
   //int& X; references musr refer to an already exsiting object
   // Alias R = A;
   cout << R << endl;
   
   R = 50;

   cout << A << endl;

   A += 25;

   cout << R << endl;

   return 0;
}

// Fe , Felipe