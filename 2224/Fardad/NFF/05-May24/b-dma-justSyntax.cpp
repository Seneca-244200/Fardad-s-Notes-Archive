#include <iostream>
using namespace std;
int main() {
   int* a = nullptr;
   int i;
   // i is statically allocated variable
   // "a" by itself is statically allocated variable
   cout << "Program starting..." << endl;
   cout << "allocate 10 ints" << endl;
   a = new int[10]; // array of 10 ints pointed by  a is dynamically allocated
   for (i = 0; i < 10; i++) {
      a[i] = i * 123;
   }
   for (i = 0; i < 10; i++) {
      cout << a[i] << " " ;
   }
   cout << endl;
   cout << "before ending the app, give the mem back to the OS";
   delete[] a;
   a = nullptr;
   cout << "making a bigger int array" << endl;
   a = new int[20];// the "new" command requests for allocation of the upcomming type and size from 
                    // the operating system.
                    // after OS allocates the memroy, and give the address to "new",the "new" returns
                    // that adderss to you! so you can store it in a!
                    // if there is not enough memroy, OS will give you "nullptr"
   if (a != nullptr) { // if(a){
      for (i = 0; i < 20; i++) {
         a[i] = i * 123;
      }
      for (i = 0; i < 20; i++) {
         cout << a[i] << " ";
      }
      cout << endl;
      delete[] a; // deletes where a is pointing to
   }
   else {
      cout << "Not Enough Memory!!!" << endl;
   }
   return 0;
}