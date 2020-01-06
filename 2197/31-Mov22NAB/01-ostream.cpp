#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream myfile("hello.txt");
   myfile << "Hello there!" << endl;
   return 0;
}