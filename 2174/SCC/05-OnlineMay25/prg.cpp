#include <iostream>
using namespace std;
int main() {
   int size = 3;
   int* num = new int[size];
   int NoOfValues=0;
   int i=0;
   bool done = false;
   char ch;
   while (!done) {
      if (i < size) {
         cout << (i + 1) << ": ";
         cin >> num[i++];
         cin.ignore(1000, '\n');
         NoOfValues++;
         cout << "Continue? 'N' to quit: ";
         ch = cin.get();
         if (ch == 'n' || ch == 'N') {
            done = true;
            cin.ignore(1000, '\n');
         }
      }
      else {
         int* newMem = new int[size + 3];
         int j;
         // copy old data to new
         for (j = 0; j < size; j++) {
            newMem[j] = num[j];
         }
         size = size + 3;
         delete[] num;
         num = newMem;
         //temp = nullptr; good practice, but no need!
      }
   }
   for (i = NoOfValues - 1; i >= 0; i--) {
      cout << num[i] << " ";
   }
   delete[] num;
   cout << endl;
   return 0;
}