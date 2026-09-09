#include <iostream>
#include <fstream>
#include "Bucket.h"
using namespace std;
using namespace seneca;


int main() {
   Bucket B(10.2, 100.3);
   ofstream file("output.txt");
   ifstream infile("input.txt");
   file.width(20);
   file.fill('*');
   file << 123 << endl << B << endl;
   infile >> B;
   cout << B << endl;
   return 0;
}