#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ofstream file("Myfile.txt");
   file << "Here is myfile";
   return 0;
}