#include <fstream>
#include <iostream>
using namespace std;
int main() {
   int n = 10;
   int i;
   char str[81] = "empty!";
   fstream file("quiz.txt", ios::in);
   for (i = 0; i < 5; i++) {
      while (file.get() != '=');
      file >> n;
      cout << n << endl;
   }
   file >> str;
   cout << str;
   cout << endl;
   return 0;
}
/*
output:
0
-1
0
0
endless loop, program hangs.
*/