#include <iostream>
#include <fstream>
using namespace std;
int main() {
   char str[201];
   ifstream fin("MyFile.txt");
   fin >> str;
   cout << str << endl;;
   return 0;
}