#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container X("D", 120, 150);
   cin >> X;
   cout << "Here is your container: " << endl << X << endl;
   return 0;
}