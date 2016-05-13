
#include <iostream>
using namespace std;
#include "MyString.h"
using namespace sict;
int main(){
  int i = 4;
  int j;
  j = i++;
  MyString name;
  MyString lastname = "Soley";
  MyString fullname;
  name = "Fred";
  cout << "*" << name << "*" << endl;
  fullname = name++;
  cout << "*" << fullname << "*" << endl;
  fullname = name += ++lastname;
  cout << name << endl;

  cout << fullname << endl;
  cout << lastname[1] << endl;
  lastname[1] = 'M';
  cout << lastname << endl;
  return 0;
}