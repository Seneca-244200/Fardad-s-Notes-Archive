#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){

  MyString name;
  MyString lastname = "Soley";

  /*name.display() << endl;
  name.set("Fred");
  name.display() << endl;
  name.addSpaceAfter();
  name.display() << "*" << endl;
  name.append(lastname);
  name.display() << endl;*/

  name.display() << endl;
  name = "Fred";
  //  name. operator= ("Fred");
  name.display() << endl;
  name += " ";
  //  name.operator+=( " ");
  name.display() << "*" << endl;
  name += lastname;
  //  name.operator+=(lastname);
  name.display() << endl;

  return 0;
}