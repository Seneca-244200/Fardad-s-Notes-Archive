#include <iostream>
#include <fstream>
using namespace std;


int main() {
   char text[1024];
   ifstream infile("message.txt");
   infile >> text;
   cout << text << endl;
   return 0;
}