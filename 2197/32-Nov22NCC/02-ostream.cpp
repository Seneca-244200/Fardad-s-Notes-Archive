#include <iostream>
#include <fstream>
using namespace std;
int main() {
   char str[81];
   ifstream myfile("hello.txt");
   myfile >> str;
   cout << str << endl;
   myfile >> str;
   cout << str << endl;
   return 0;
}