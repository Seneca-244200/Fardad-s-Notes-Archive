#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream file("output.txt");
   cout << "OOP244NAA - Mar 18" << endl;
   file << "OOP244NAA - Mar 18" << endl;
   return 0;
}