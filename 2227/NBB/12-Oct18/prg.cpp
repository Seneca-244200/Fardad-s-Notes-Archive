#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
   //   cout << setw(50) << setfill('*') << "This is a test" << endl;
   ofstream fileout("test.txt");
   fileout << "|";
   fileout.width(50);
   fileout.fill('*');
   fileout.setf(ios::left);
   fileout << "This is a test" << "|" << endl;
   fileout.fill(' ');
   fileout.unsetf(ios::left);
   fileout << "|";
   fileout.width(20);
   fileout << "Hello" << "|" << endl;
   return 0;
}