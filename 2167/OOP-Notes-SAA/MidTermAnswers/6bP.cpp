// 10 marks
#include <iostream>
using namespace std;
int main() {
   int num; //3
   double* a;
   int i;
   cout << "Number of doubles: ";
   cin >> num;
   a = new double[num];           //2
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