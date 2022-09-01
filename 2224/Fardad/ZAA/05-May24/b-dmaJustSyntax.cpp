#include <iostream>
using namespace std;
int main() {
   int* a;
   int i;
   cout << "Starting the program!" << endl;
   a = new int[10];
   for (i = 0; i < 10; i++) {
      a[i] = i * 100;
   }
   for (i = 0; i < 10; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   cout << "Deleting the allocated memroy" << endl;
   delete[] a;
   a = nullptr; // to mark the pointer unused
   cout << "making a bigger by allocating 20 ints" << endl;
   a = new int[20]; // the "new" command requests for allocation of the upcomming type and size from 
                    // the operating system.
                    // after OS allocates the memroy, and give the address to "new", "new" returns
                    // that adderss to you! so you can store it in a!
                    // if there is not enough memroy, OS will give you "nullptr"
   if (a) { // if (a != nullptr){
      for (i = 0; i < 20; i++) {
         a[i] = i * 100;
      }
      for (i = 0; i < 20; i++) {
         cout << a[i] << " ";
      }
      cout << endl << "Deleting the 20 ints!" << endl;
      delete[] a;
   }
   else {
      cout << "Not enough memroy!" << endl;
   }
   cout << "exiting the program" << endl;
   return 0;
}