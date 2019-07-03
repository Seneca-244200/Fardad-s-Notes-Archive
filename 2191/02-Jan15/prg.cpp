
#include <iostream>
using namespace std;
void readInt(int&  num) {
   cout << "int: ";
   cin >> num;
}

int main() {
   int i = 20;

   int& R = i;

   cout << R << endl;
   R = 10;
   cout << i << endl;

   readInt(i);
   cout << i <<endl;
   return 0;
}

