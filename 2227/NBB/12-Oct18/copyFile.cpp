#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
   char src[256];
   char des[256];
   char ch;
   cout << "Enter source file: ";
   cin.getline(src, 256);
   cout << "Enter destination file: ";
   cin.getline(des, 256);
   ifstream fsrc(src);
   ofstream fdes;
   if (fsrc) fdes.open(des);
   if (!fsrc) cout << "Cound not open " << src << endl;
   if (fsrc && !fdes) cout << "Cound not open " << des << endl;
   while (fsrc && fdes) {
      ch = fsrc.get();
      if(fsrc) fdes << ch;
   }
   return 0;
}