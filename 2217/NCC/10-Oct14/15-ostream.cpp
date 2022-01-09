#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream file("myfile.txt");
   file.width(10);
   file.setf(ios::left);
   file << 2345;
   file << "<<<" << endl;
   return 0;
}