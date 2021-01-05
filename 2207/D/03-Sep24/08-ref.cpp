#include <iostream>
using namespace std;

void readInt(int& num) {
   cout << "int: ";
   cin >> num;
}

int main() {
   int i;
   readInt(i);
   cout << i << endl;
   return 0;
}

