// Final Project Milestone 4
// NFI Tester program
// File nfiTester.cpp
// Version 1.3
// Date 2015/04/07
// Author Fardad Soleimanloo
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/07           Preliminary release
// Fardad             2015/04/08           removed extra spaces in output
// Fardad             2015/04/09           Added pause after each test
// Fardad             2015/04/10           renamed pause to _pause  
//                                         resolve linux conflict        
/////////////////////////////////////////////////////////////////
#include "NFI.h"
using namespace oop244;
using namespace std;
void piv(const char* upc, const char* name, const char* price = "", const char* qty = "", const char* qtyNd = "", const char* unit = "", const char* date = ""){
  cout
    << "Enter the following: " << endl
    << "upc: " << upc << endl
    << "name: " << name << endl;
  if (price[0]) cout << "price: " << price << endl;
  if (qty[0]) cout << "Quantity on hand: " << qty << endl;
  if (qtyNd[0]) cout << "Quantity needed: " << qtyNd << endl;
  if (unit[0] && date[0]){
    cout
      << "Unit: " << unit << endl
      << "Expiry date: " << date << endl;
  }
  cout << endl;
}
void dumpFile(const char* fname){
  ifstream f(fname);
  char ch;
  while (!f.get(ch).fail()){
    cout.put(ch);
  }
  f.clear();
  f.close();
}
void _pause(){
  cout << "****press enter to continue...";
  cin.ignore(1000, '\n');
}

int main(){
  fstream nfifile("nfi.txt", ios::out);
  NFI nfi;
  bool ok = true;
  int i;
  cout << "--NFI test:" << endl;
  cout << "----Price validation test:" << endl;
  piv("abc", "abc", "abc");
  cin >> nfi;
  if (cin.fail()){
    cin.clear();
    cin.ignore(2000, '\n');
    cout << "Passed " << nfi << endl;
  }
  else{
    ok = false;
    cout << "Price validation failed" << endl;
  }
  _pause();
  if (ok){
    cout << "----Quantity validation test:" << endl;
    piv("abc", "abc", "10", "abc");
    cin >> nfi;
    if (cin.fail()){
      cin.clear();
      cin.ignore(2000, '\n');
      cout << "Passed " << nfi << endl;
    }
    else{
      ok = false;
      cout << "Quantity validaton failed" << endl;
    }
  }
  _pause();
  if (ok){
    cout << "----Quantity Needed validation test:" << endl;
    piv("abc", "abc", "10", "10", "abc");
    cin >> nfi;
    if (cin.fail()){
      cin.clear();
      cin.ignore(2000, '\n');
      cout << "Passed " << nfi << endl;
    }
    else{
      ok = false;
      cout << "Quantity Needed validaton failed" << endl;
    }
  }
  _pause();
  if (ok){
    cout << "----Display test, the output of the Program and yours must match:" << endl;
    piv("1234", "Box", "123.45", "1", "5");
    cin >> nfi;
    cin.ignore(1000, '\n');
    cout << "--Linear------------" << endl;
    cout << "Program: 1234   |Box                 | 139.50|   1|   5" << endl;
    cout << "  Yours: " << nfi << endl;
    cout << "--Form Display------" << endl;
    cout << "--Program: " << endl;
    cout << "upc: 1234" << endl;
    cout << "name: Box" << endl;
    cout << "price: 123.45" << endl;
    cout << "Price after tax: 139.50" << endl;
    cout << "Quantity On Hand: 1" << endl;
    cout << "Quantity Needed: 5" << endl;
    cout << "--Yours: " << endl;
    nfi.display(cout, false);
  }
  _pause();
  if (ok){
    cout << "----Storage and loading test, the output of the Program and yours must match:" << endl;
    NFI tnfi;
    nfi.store(nfifile);
    nfi.store(nfifile);
    nfifile.close();
    cout << "--Store NFI, program: " << endl
      << "N,1234,Box,123.45,1,5" << endl
      << "N,1234,Box,123.45,1,5" << endl;
    cout << "--Store NFI, yours: " << endl;
    dumpFile("nfi.txt");
    cout << "--Load NFI: " << endl;
    nfifile.open("nfi.txt", ios::in);
    nfifile.ignore(2);
    tnfi.load(nfifile);
    cout << "Program: 1234   |Box                 | 139.50|   1|   5" << endl;
    cout << "  Yours: " << tnfi << endl;
    nfifile.clear();
    nfifile.close();
  }
  return 0;
}