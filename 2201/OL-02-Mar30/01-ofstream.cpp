#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream fout("MyFile.txt");
   //fout.open("MyFile.txt"); // called in the one argument constructor
   fout << "Hello there!" << endl;
   //fout.close(); // this will be called in the destructor
   return 0;
}