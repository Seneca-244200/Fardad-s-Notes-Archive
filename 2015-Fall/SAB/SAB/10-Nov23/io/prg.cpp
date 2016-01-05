#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream filein("myage.txt");
  if (!filein.fail()){
    char line[1000];
    filein >> line;
    cout << line << endl;
    filein.getline(line, 100, '\n');
    cout << line << endl;
  }
  else{
    cout << "could not open file!" << endl;
  }
  return 0;
}