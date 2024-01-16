#include  <iostream>
using namespace std;


int main( ) {
   int size;
   int* nums{};
   cout << "How many ints?\n> ";
   cin >> size;
   nums = new int[size];
   if ( nums == nullptr ) {
      cout << "no enough memory!!!" << endl;
   }
   else {
      int i;
      for ( i = 0; i < size; i++ ) {
         cout << (i + 1) << ": ";
         cin >> nums[i];
      }
      for ( i = size - 1; i >= 0; i-- ) {
         cout << (i + 1) << "- " << nums[i] << endl;
      }
      delete[] nums;
   }
   return 0;
}