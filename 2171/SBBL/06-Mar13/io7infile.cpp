#include <iostream>
#include <fstream>
using namespace std;


int main() {
   char text[1024];
   ifstream infile("message.txt");
   //while (infile) { // or you can use this because
                      // opeator bool(); is overlaoded for istream
   while (!infile.fail()) {
      infile >> text;
      cout << text << " ";
   }
   cout << endl;
   return 0;
}