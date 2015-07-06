// Final Project Milestone 3 
// Item Tester program
// File	ItemTester.cpp
// Version 1.1
// Date	2015/04/03
// Author	Fardad Soleimanloo
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/03		       Preliminary release
// Fardad             2015/04/06		       Penamed ms4.txt to ms3.txt
/////////////////////////////////////////////////////////////////

#include "Item.h"
#define TAB '\t'
#include <iomanip>
using namespace std;
namespace oop244{
  class SItem :public Item{
  public:
    SItem() :Item("", "", 0, 0){}
    virtual std::fstream& store(std::fstream& file)const{
      file.open("ms3.txt", ios::out);
      file << upc() << TAB << name() << TAB << quantity() << TAB << qtyNeeded() << TAB
        << int(taxed()) << TAB << price() << endl;
      file.close();
      return file;
    }
    virtual std::fstream& load(std::fstream& file){
      file.open("ms3.txt", ios::in);
      char buf[2000];
      double dbuf;
      int ibuf;
      file >> buf;
      upc(buf);
      file >> buf;
      name(buf);
      file >> ibuf;
      quantity(ibuf);
      file >> ibuf;
      qtyNeeded(ibuf);
      file >> ibuf;
      taxed(bool(ibuf));
      file >> dbuf;
      price(dbuf);
      file.close();
      return file;
    }
    virtual std::ostream& display(std::ostream& os, bool linear)const{
      return os << upc() << ": " << name() << endl
        << quantity() << "<qty----OnHnd>" << qtyNeeded() << endl
        << fixed << setprecision(2) << cost();
    }
    virtual std::istream& conInput(std::istream& is){
      char buf[2000];
      double dbuf;
      int ibuf;
      cout << "upc: ";
      is >> buf;
      upc(buf);
      cout << "name (no spaces): ";
      is >> buf;
      name(buf);
      cout << "qty: ";
      is >> ibuf;
      quantity(ibuf);
      cout << "qty Needed: ";
      is >> ibuf;
      qtyNeeded(ibuf);
      cout << "is taxed? (1/0): ";
      is >> ibuf;
      taxed(bool(ibuf));
      cout << "price: ";
      is >> dbuf;
      price(dbuf);
      return is;
    }
  };
}

using namespace oop244;
int main(){
  double res, val = 0.0;
  fstream F;
  SItem S, T, U;
  cout << "Enter Item info: " << endl;
  cin >> S;
  SItem V = S;
  S.store(F);
  T.load(F);
  cout << "T: (store, load)----------" << endl;
  cout << T << endl;
  cout << "S: ----------" << endl;
  cout << S << endl;
  cout << "V(S): ----------" << endl;
  cout << V << endl;
  cout << "U=T: & op=----------" << endl;
  U = T;
  cout << U << endl;
  cout << "Operator ==----------" << endl;
  cout << "op== is " << (T == "123" ? "OK" : "NOT OK") << endl;
  cout << "op+=: ----------" << endl;
  U += 20;
  cout << U << endl;
  cout << "op+=double: ----------" << endl;
  res = val += U;
  cout << res << "=" << val << endl;
  return 0;
}