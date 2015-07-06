// Final Project Milestone 4
// Perishable Tester program
// File PerishableTester.cpp
// Version 1.3
// Date 2015/04/08
// Author Fardad Soleimanloo
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/08           Preliminary release
// Fardad             2015/04/09           corrected abc to water at prog prn
// Fardad             2015/04/09           Added pause after each test
// Fardad             2015/04/10           renamed pause to _pause  
//                                         resolve linux conflict        
/////////////////////////////////////////////////////////////////
#include "Perishable.h"
using namespace oop244;
using namespace std;
void piv(const char* upc, const char* name, const char* price = "", const char* qty  ="", const char* qtyNd = "", const char* unit = "", const char* date = ""){
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
  fstream pshfile("psh.txt", ios::out);
  Perishable psh;
  bool ok = true;
  int i;
  cout << "--Perishable Item test:" << endl;
  cout << "----Price validation test:" << endl;
  piv("abc", "abc", "abc");
  cin >> psh;
  if (cin.fail()){
    cin.clear();
    cin.ignore(2000, '\n');
    cout << "Passed " << psh << endl;
  }
  else{
    ok = false;
    cout << "Price validaton failed" << endl;
  }
  _pause();
  if (ok){
    cout << "----Quantity Validation test:" << endl;
    piv("abc", "abc", "10", "abc");
    cin >> psh;
    if (cin.fail()){
      cin.clear();
      cin.ignore(2000, '\n');
      cout << "Passed " << psh << endl;
    }
    else{
      ok = false;
      cout << "Quantity validaton failed" << endl;
    }
  }
  _pause();
  if (ok){
    cout << "----Quantity Needed Validation test:" << endl;
    piv("abc", "abc", "10", "10", "abc");
    cin >> psh;
    if (cin.fail()){
      cin.clear();
      cin.ignore(2000, '\n');
      cout << "Passed " << psh << endl;
    }
    else{
      ok = false;
      cout << "Quantity Needed validaton failed" << endl;
    }
  }
  _pause();
  if (ok){
    cout << "----Expiray date Validation test:" << endl;
    piv("abc", "abc", "10", "10", "10", "abc", "10/1/1");
    cin >> psh;
    if (cin.fail()){
      cin.clear();
      cout << "Passed " << psh << endl;
    }
    else{
      ok = false;
      cout << "Expiry date validaton failed" << endl;
    }
    cin.ignore(2000, '\n');
  }
  _pause();
  if (ok){
    cout << "----Display test, the output of the Program and yours must match:" << endl;
    piv("1234", "water", "1.5", "1", "5", "lit", "2017/10/12");
    cin >> psh;
    cin.ignore(2000, '\n');
    cout << "--Linear------------" << endl;
    cout << "Program: 1234   |water               |   1.50|   1|   5|lit       |2017/10/12" << endl;
    cout << "  Yours: " << psh << endl;
    cout << "--Form Display------" << endl;
    cout << "--Program: " << endl;
    cout << "upc: 1234" << endl;
    cout << "name: water" << endl;
    cout << "price: 1.50" << endl;
    cout << "Price after tax: 1.50" << endl;
    cout << "Quantity On hand: 1" << endl;
    cout << "Quantity Needed: 5" << endl;
    cout << "Unit: lit" << endl;
    cout << "Expiry date: 2017/10/12" << endl;
    cout << "--Yours: " << endl;
    psh.display(cout,false);
  }
  _pause();
  if (ok){
    cout << "----Storage and loading test, the output of the Program and yours must match:" << endl;
    Perishable tpsh;
    psh.store(pshfile);
    psh.store(pshfile);
    pshfile.close();
    cout << "--Store Perishable, program: " << endl
      << "P,1234,water,1.5,lit,1,5,2017/10/12" << endl
      << "P,1234,water,1.5,lit,1,5,2017/10/12" << endl;
    cout << "--Store NFI, yours: " << endl;
    dumpFile("psh.txt");
    cout << "--Load Perishable: " << endl;
    pshfile.open("psh.txt", ios::in);
    pshfile.ignore(2);
    tpsh.load(pshfile);
    cout << "Program: 1234   |water               |   1.50|   1|   5|lit       |2017/10/12" << endl;
    cout << "  Yours: " << tpsh << endl;
    pshfile.clear();
    pshfile.close();
  }

  return 0;
}
