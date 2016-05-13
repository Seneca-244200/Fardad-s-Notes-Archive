/*
          ios
istream        ostream
ifstream       ofstream
         fstream

*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream fileout;
  fileout.open("hello.txt");
  fileout << "Hello world! " << endl;
  fileout.close();
  return 0;
}