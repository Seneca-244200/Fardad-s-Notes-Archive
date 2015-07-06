// Final Project Milestone 2
// Tester program
// File	StreamableTester.cpp
// Version 1.0
// Date	2015/04/01
// Author	Fardad Soleimanloo
//
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/01           Preliminary release
/////////////////////////////////////////////////////////////////
#include <iostream>
#include "MyFile.h"
using namespace std;
using namespace oop244;
int main(){  
  fstream file;
  MyFile F("streamable.txt");
  cout << "Run this program few times and keep adding to" <<endl<<"the content of the file created." << endl;
  F.load(file);
  cout << "Linear content of file streamable.txt: " << endl << endl << F << endl;
  cout << "Press <ENTER> to continue...";
  cin.ignore();
  cout << endl << "streamble.txt as is: " << endl;
  F.print();
  cout << " ---------------- " << endl << "Enter a text and then"
        <<endl<<"On windows end it with in a new line with Ctrl-Z <ENTER>"
        <<endl<<"On Linux or mac end it with a new line with Ctrl-D" 
        <<endl<< "to append to the end of streamable.txt:" << endl;
  cin >> F;
  F.store(file);
  cout << "Re-run the program to see the appended lines." << endl;
  return 0;
}