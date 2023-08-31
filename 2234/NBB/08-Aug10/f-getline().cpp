#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   fin.getline(str, 30,'<');
   cout << "30?" << str << "?" << endl;
   fin.getline(str, 30);
   cout << "30?" << str << "?" << endl;
   fin.getline(str, 5);
   cout << "30?" << str << "?" << endl;
   if(!fin) {
      fin.clear();
   }
   fin.getline(str, 5);
   cout << "30?" << str << "?" << endl;
   if(!fin) {
      fin.clear();
      fin.ignore(10000, '\n');
   }
   fin.getline(str, 50);
   cout << "30?" << str << "?" << endl;

   return 0;
}