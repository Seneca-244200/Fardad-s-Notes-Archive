#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ofstream file("myfile.txt");
   file << "this goes into my file!" << endl;
   return 0;
}

