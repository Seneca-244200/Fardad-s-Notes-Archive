#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream fout("output.txt");
   fout << "Hello" << endl << "*";
   fout.width(10);
   fout.fill('#');
   fout << 123 << "*" << endl;
   return 0;
}