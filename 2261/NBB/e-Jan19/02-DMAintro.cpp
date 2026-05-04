#include <iostream>
using namespace std;
int main( ) {
   int* cnt{};
   cnt = new int{};
   //int nubmers[somevalue];
   int* numbers{}; // = nullptr;
   cout << "Please enter the number of integer numbers:\n> ";
   cin >> *cnt;
   numbers = new  int[*cnt];
   if (cnt == nullptr || numbers == nullptr ) {
      cerr << "Not enough memory!" << endl;
   }
   else { // where I have memory and I can work with it.
      cout << "Enter numbers:" << endl;
      for ( int i = 0; i < *cnt; i++ ) {
         cout << (i + 1) << ": ";
         cin >> numbers[i];
      }
      cout << "Numbers in reverse:" << endl;
      for ( int i = *cnt - 1; i >= 0; i-- ) {
         cout << numbers[i];
         if ( i != 0 ) cout << ", ";
      }
   }   
   delete[] numbers;
   delete cnt;
   return 0;
}

/*



*/