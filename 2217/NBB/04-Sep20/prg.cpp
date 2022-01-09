#include <iostream>
using namespace std;


int main() {
   int size;
   int i;
   int* numptr = nullptr;  //golden rule: always set unused and unassigned pointers to nullptr
   cout << "how many integers?" << endl << ">";
   cin >> size;
   numptr = new int[size];
   if (numptr != nullptr) {
      for (i = 0; i < size; i++) {
         cout << (i + 1) << "> ";
         cin >> numptr[i];
      }
      for (i = 0; i < size; i++) {
         cout << (i + 1) << "> " << numptr[i] << endl;
      }
      delete[] numptr;
   }
   else {
      cout << "out of memory!" << endl;
   }
   return 0;
}

