#include <iostream>
using namespace std;

int main( ) {
   cout << "Welcome to OOP244ZAA 04-Jan 19th." << endl;
   int* nums = nullptr;
   size_t noOfInts{};
   cout << "Please enter then number of integers:\n> ";
   cin >> noOfInts;
   nums = new int[noOfInts];
   if ( nums ) {
      size_t i{};
      for ( ; i < noOfInts; i++ ) {
         cout << (i + 1) << "> ";
         cin >> nums[i];
      }
      for ( i = 0; i < noOfInts; i++ ) {
         cout << (i + 1) << ": " << nums[noOfInts - i - 1];
      }
   }
   else {
      cout << "Memory allocation failed!" << endl;
   }
   delete[] nums;
   nums = nullptr;// not needed, just to force a habit!
   return 0;
}