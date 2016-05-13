/*
         ios
istream        ostream
ifstream       ofstream
       fstream
ios::?? 
in, out, app, trunc, ate   (bin)
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  char fname[256];
  cout << "Please enter the name of the file: ";
  cin.getline(fname, 255, '\n');
  fstream filein(fname, ios::in | ios::out);
  if (filein.fail()){
    cout << "File not found" << endl;
  }
  else{
    while (!filein.fail()){
      cout << char(filein.get());
    }
  }
  return 0;
}