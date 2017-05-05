
#include <iostream>
#include <fstream>
using namespace std;


int main() {
   char text[1024];
   ifstream infile("info.txt");
   while (!infile.fail()) {
      infile >> text;
      cout << text << " ";
   }
   return 0;
}