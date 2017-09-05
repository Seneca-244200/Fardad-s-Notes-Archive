#include <iostream>
using namespace std;

int main() {
   int num; //3
   int* a;
   int i;
   cout << "Number of ints: ";
   cin >> num;
   a = new int[num];               //2
   for (i = 0; i < num; i++) {   //2
      cout << (i + 1) << ": ";
      cin >> a[i];
   }
   for (i = num - 1; i >= 0; i--) { //1
      cout << a[i] << " ";
   }
   cout << endl;
   delete[] a;  //2
   return 0;
}