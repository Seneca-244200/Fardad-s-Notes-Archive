#include <iostream>
#include <fstream>
using namespace std;



int main(){
  ofstream outfile("info.txt");
  outfile << "My name is Fardad and I am " << 50 << " years old" << endl;
  return 0;
}