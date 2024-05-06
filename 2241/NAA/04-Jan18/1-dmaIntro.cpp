#include <iostream>
using namespace std;
int main( ) {
   cout << "Welcome to OOP244NAA 04-Jan18" << endl;
   int* numbers = nullptr;
   size_t size{};
   cout << "Enter the number of integer values to be printed in reverse.\n> ";
   cin >> size;
   numbers = new int[size];
   for ( size_t i = 0; i < size; i++ ) {
      cout << (i + 1) << " > ";
      cin >> numbers[i];
   }

   for ( size_t i = 0; i < size; i++ ) {
      cout << (i + 1) << ": " << numbers[size - i - 1] << endl;
   }
   delete[] numbers;
   numbers = nullptr;
   delete[] numbers;
   return 0;
}