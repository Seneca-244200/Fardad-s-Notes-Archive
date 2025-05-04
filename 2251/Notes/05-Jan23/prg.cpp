#include <iostream>
using namespace std;
void prnRev( const int* nums , size_t cnt);
bool yes( const char* prompt );
int main( ) {
   cout << "OOP244NAA Jan 23" << endl;
   size_t cnt{ }; // number of integers to print in reverse order
   // int* numbers {}; 
   // a dynamic array of numbers
   int* numbers = nullptr; // the first rule of DMA: 
                    //pointers that are not used are set to "nullptr"
   do {

      cout << "Please enter the number of the integer values\n> ";
      cin >> cnt;
      numbers = new int[cnt];
      for ( size_t i{}; i < cnt; i++ ) {
         cout << (i + 1) << ": ";
         cin >> numbers[i];
      }
      prnRev( numbers, cnt );
      delete[] numbers;
      numbers = nullptr;
   } while ( yes( "continue? " ) );
   return 0;
}
bool yes( const char* prompt ) {
   char resp{};
   cout << prompt << " (Y)es/(N)o\n> ";
   cin >> resp;
   return (resp == 'Y' || resp == 'y');
}

void prnRev( const int* nums, size_t cnt ) {
   size_t i = cnt - 1;
   for ( ; i >  0; i-- ) {
      if ( i != cnt-1 ) cout << ", ";
      cout << nums[i];
   }
   cout <<", "<<  nums[i] << endl;
}
