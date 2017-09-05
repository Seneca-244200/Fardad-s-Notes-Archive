
#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){

  MyString name;
  MyString lastname = "Soley";
  MyString fullname;
  cout << name << endl;
  // ostream& operator<<(ostram& ostr, const Mystring& S);
  name = "Fred";
  ++lastname;
  cout << name << endl;
  fullname = name + lastname;
  cout << fullname << endl;
  lastname.display() << endl;

  return 0;
}