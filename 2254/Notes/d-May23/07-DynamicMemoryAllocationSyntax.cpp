#include <iostream>
using namespace std;

int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int* array = nullptr;
   int* num = new int;
   cout << "How many integers?\n> ";
   cin >> *num;
   array = new int[*num];
   cout << "Enter the numbers:" << endl;
   for ( int i = 0; i < *num; i++ ) {
      cout << (i + 1) << "> ";
      cin >> array[i];
   }
   for ( int i = *num - 1; i >= 0; i-- ) {
      cout << array[i] << " ";
   }
   cout << endl;
   delete[] array;
   delete num;
   return 0;
}