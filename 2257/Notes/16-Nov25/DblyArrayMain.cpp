#include <iostream>
#include "DblArray.h"
using namespace std;
void ShowDblArray(const DblArray& d) {
   for (int i = 0; i < d.size(); i++) {
      cout << d[i] << " ";
   }
}
int main() {
   DblArray d(5);
   for (int i = 0; i < 7; i++) {
      d[i] = i + 10.345;
   }
   ShowDblArray(d);
   cout << endl;
   for (int i = 0; i < 10; i++) {
      cout << d[i] << " ";
   }
   cout << endl;
   return 0;
}