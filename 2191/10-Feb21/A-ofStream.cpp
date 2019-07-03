#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ofstream myfile("hoohoo.txt");
  cout << "hello there!" << endl;
  myfile << "hello in the file!" << endl;

  return 0;
}