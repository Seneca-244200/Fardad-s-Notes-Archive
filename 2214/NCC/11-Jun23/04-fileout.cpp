#include <iostream>
#include <fstream>
using namespace std;


int main() {
   ofstream fileout("myfile.txt");
   fileout << "Hello I am here!" << endl;
   fileout.width(30);
   fileout.fill('#');
   fileout.setf(ios::right);
   fileout << 123 << endl;
   fileout.width(30);
   fileout.unsetf(ios::right);
   fileout.setf(ios::left);
   fileout << 123 << endl;
   return 0;
}