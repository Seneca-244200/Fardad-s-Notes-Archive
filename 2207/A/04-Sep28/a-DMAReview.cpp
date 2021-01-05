#include <iostream>
using namespace std;
// our task is to read unknow number of 
// double values and print them in reverse
// order
int main() {
   int* numptr;
   int i;
   double* numbers;
   cout << "How many numbers you want to enter?";
   numptr = new int;
   cin >> *numptr; // Now I know how many double I need;
   numbers = new double[*numptr];// allocate
   for (i = 0; i < *numptr; i++) {
      cout <<i+1<<": " ;
      cin >> numbers[i];
   }

   for (i = *numptr - 1; i >= 0; i--) {
      cout << numbers[i] << endl;
   }
   delete[] numbers; // deallocate
   delete numptr;
   return 0;
}