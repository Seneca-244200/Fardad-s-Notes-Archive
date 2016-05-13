
#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){

  MyString name;
  MyString lastname = "Soley";
  MyString fullname;
  name.display() << endl;
  name = "Fr";            // potato
//  name.operator=("Fr"); // potaato
  name.display() << endl;
  name += "ed ";

  name.display() << "*" << endl;
  fullname = name + lastname;
 // fullname = name.operator+(lastname);
// MyString operator+(const MyString&,const MyString&)
// MyString operator+(const MyString)const
  fullname.display() << endl;

  return 0;
}