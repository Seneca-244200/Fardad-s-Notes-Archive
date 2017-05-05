#include <iostream>
#include <fstream>
using namespace std;


int main() {
   char text[1024];
   ofstream outfile("spaces.txt");
   outfile << "My name        is      Fardad     and I am " << 50 << " years old!\n";
   outfile.close();
   ifstream infile("spaces.txt");
   while (!infile.fail()) {
      infile >> text;
      cout << text << " ";
   }
   cout << endl;
   return 0;
}