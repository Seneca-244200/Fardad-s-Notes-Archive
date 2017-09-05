
#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){

  MyString name = "Fred";
  MyString lastname = "Soley";
  MyString fullname;
  ++lastname;
  fullname = name++;
  cout << "*" << fullname << "*" << endl;
  cout << "*" << name << "*" << endl;
  fullname = name += lastname;

  cout << fullname << endl;
  return 0;

  

}

