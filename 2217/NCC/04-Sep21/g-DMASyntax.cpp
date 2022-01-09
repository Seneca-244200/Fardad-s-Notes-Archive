#include <iostream>
using namespace std;
int main() {
   int* ptr = nullptr;
   cout << "Pointer created!" << endl;
   ptr = new int[500];
   if (ptr != nullptr) {
      cout << "memory allocated!" << endl;
      for (int i = 0; i < 500; i++) {
         ptr[i] = i * 10;
      }
      for (int i = 0; i < 500; i++) {
         cout << ptr[i] << " ";
      }
      delete[] ptr; // extremly important
      ptr = nullptr;
      cout << "Memory deallocated (given back to OS)" << endl;
   }
   else{ 
      cout << "Out of memory!" << endl;
   }
   return 0;
}