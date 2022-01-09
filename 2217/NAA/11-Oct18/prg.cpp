#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;
int main() {
   // anything will cout will work with this too
   ofstream fout("output.txt"); // scope of oop244
   // anything will cin will work with this too
   ifstream fin("input.txt"); // scope of oop244


   fstream iofile("io.txt", ios::in | ios::out);
   fstream emptyIofile("io.txt", ios::in | ios::out | ios::trunc);
   fstream iofileAlwaysAppend("io.txt", ios::in | ios::out | ios::app);
   fstream iofileWriteAtEndInitially("io.txt", ios::in | ios::out | ios::ate);

   return 0;
}