
#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){

  MyString name;
  MyString lastname = "Soley";

//  name.display() << endl;
  cout << name << endl;


  name = "Fr";

//  name.display() << endl;
  cout << name << endl;
  name += "ed ";

//  name.display() << "*" << endl;
  cout << name << "*" << endl;
  name += lastname;

  name.display() << endl;
//  cout << name << endl;
  cout << "Please enter you full name: ";
  cin >> name;
  cout << "Hello " << name << "!" << endl;
  return 0;
}