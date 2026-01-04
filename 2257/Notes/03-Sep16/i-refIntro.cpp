#include <iostream>
using namespace std;

int main() {
   int var = 100;

   int& num = var;

   cout << num << endl;
   num += 100;
   cout << var << endl;

   return 0;
}