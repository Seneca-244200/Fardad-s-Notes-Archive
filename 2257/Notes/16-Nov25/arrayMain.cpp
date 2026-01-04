#include <iostream>
#include "Array.h"
using namespace std;
using namespace seneca;
template <typename T>
void ShowArray(const Array<T>& d) {
   for (int i = 0; i < d.size(); i++) {
      cout << d[i] << " ";
   }
}
int main() {
   Array<double> d(5);
   Array<int> a(5);
   for (int i = 0; i < 7; i++) {
      d[i] = i + 10.345;
   }
   for (int i = 0; i < 7; i++) {
      a[i] = i + 10;
   }
   ShowArray(d);
   ShowArray(a);
   cout << endl;
   for (int i = 0; i < 10; i++) {
      cout << d[i] << " ";
   }
   for (int i = 0; i < 10; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   return 0;
}