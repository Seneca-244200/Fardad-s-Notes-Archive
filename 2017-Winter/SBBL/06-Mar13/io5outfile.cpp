#include <iostream>
#include <fstream>
using namespace std;


int main() {
   ofstream outfile("message.txt");
   outfile << "My name is Fardad and I am " << 50 << " years old!\n";
   return 0;
}