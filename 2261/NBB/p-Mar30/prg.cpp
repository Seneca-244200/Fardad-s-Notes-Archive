#include <iostream>
#include "TitledName.h"
using namespace std;
int main() {
   TitledName n("Mr", "jack" );
   n.print(cout) << endl;
   cout << "Title Name\n>";
   cin >> n;
   //n.read(cin);
   n.print(cout) << endl;
   return 0;

}