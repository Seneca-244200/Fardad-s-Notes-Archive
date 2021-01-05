#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream filout("data.txt");
   ifstream filein("data.csv");
//   fstream file("data.dat", ios::in | ios::out | ios::app);
   return 0;
}