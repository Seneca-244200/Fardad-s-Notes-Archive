#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream fout("output.txt"); // works exactly like cout but directed to a file namely "output.txt"
   fout << "Hello" << endl << "*";
   fout.width(10);
   fout.fill('#');
   fout.setf(ios::left);
   fout << 123 << "*" << endl;
   fout.unsetf(ios::left);
   return 0;
}