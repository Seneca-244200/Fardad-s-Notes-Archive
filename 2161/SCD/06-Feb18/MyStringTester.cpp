
#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){

  MyString name;
  MyString lastname = "Soley";

  name.display() << endl;
  name = "Fr";

  name.display() << endl;
  name += "ed ";

  name.display() << "*" << endl;
  name += lastname;

  name.display() << endl;

  return 0;
}