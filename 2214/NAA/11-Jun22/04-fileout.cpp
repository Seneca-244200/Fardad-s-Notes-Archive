#include <iostream>
#include <fstream>
using namespace std;
//using namespace sdds;
int main() {
   ofstream fileout("myfile.txt");
   fileout << "Hello I am here" << endl;
   fileout.width(20);
   fileout.fill('*');
   fileout.setf(ios::right);
   fileout << 123 << endl;
   return 0;
}