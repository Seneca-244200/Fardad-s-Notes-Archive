//The following program is saved in a file called a-fileWalk.cpp.
//What is the exact output :

#include <fstream>
#include <iostream>
using namespace std;
int main() {
   int n = 10;
   fstream  f("a-fileWalk.cpp", ios::in);
   char str[2000] = "Nothing"; /* 4 input */
   f.getline(str, 1000, '*');
   f >> n;
   cout << n << endl;
   f >> str;
   cout << str;
   cout << endl;
   return 0;
}
