#include <iostream>
#include "Title.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "05-Sep23 OOP244 NAA" << endl;
   Title T("OOP244 NAA");
   T.print();
   T.set("05-Sep23 OOP244 NAA");
   T.print();
   return 0;
}