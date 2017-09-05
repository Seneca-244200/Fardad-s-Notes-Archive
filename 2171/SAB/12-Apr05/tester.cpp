#include <iostream>
#include "Title.h"
using namespace std;
void prnTitle(Title T) {
   cout << T << endl;
}
int main() {
   Title T("Fardad", "Mr.");
   prnTitle(T);
   return 0;
}
