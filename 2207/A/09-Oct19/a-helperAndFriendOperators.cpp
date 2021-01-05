#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   int content = 0;
   int res;
   double fullness = 0;
   Container D("D", 120, 150);
 //  D += content;// ok
   res = content += D;
   cout << "res: " << res << endl;
   cout << "content: " << content << endl;
   D.display() << endl;
   fullness += D;
   cout << fullness << endl;
   return 0;
}