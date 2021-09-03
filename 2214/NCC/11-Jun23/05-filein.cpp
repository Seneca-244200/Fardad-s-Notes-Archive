#include <iostream>
#include <fstream>
using namespace std;


int main() {
   char str[200];
   ifstream filein("myfile.txt");
   filein >> str ;
   cout << str << endl;
   filein >> str ;
   cout << str << endl;
   filein.getline(str, 200);
   cout << str << endl;
   return 0;
}