#include <iostream>
using namespace std;
#include "Subject.h"
using namespace sict;
int main(){
  Subject S;
  char sname[41];
  char scode[7];
  int mark;
  cout << "Subject name: ";
  cin.get(sname, 40, '\n');
  cin.ignore(1000, '\n');
  cout << "Subject code: ";
  cin.getline(scode, 7);
  cout << "Mark out of 100: ";
  cin >> mark;
  cin.ignore(1000, '\n');
  S.name(sname);
  S.code(scode);
  S.mark(mark);
  S.display();
  return 0;
}