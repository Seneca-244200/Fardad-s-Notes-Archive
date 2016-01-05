#include <iostream>
using namespace std;
#include "mystring.h"
using namespace oop244;
int main(){
  MyString
    S1,
    S2 = "oop244", // S2("oop244");
    S3 = S2;
 /* cout << "|" << S1.getCString() << "| len:"
    << S1.length() << endl;
  cout << "|" << S2.getCString() << "| len:"
    << S2.length() << endl;
  cout << "|" << S3.getCString() << "| len:"
    << S3.length() << endl;
  S3.set("oop344AB");
  cout << "|" << S3.getCString() << "| len:"
    << S3.length() << endl;
  cout << S3.set("What the heck?").getCString() << endl;
  cout << "|" << S3.getCString() << "| len:"
    << S3.length() << endl;
  S1 = S2;
  cout << "|" << S1.getCString() << "| len:"
    << S1.length() << endl;
  S3 = S3;
  cout << "|" << S3.getCString() << "| len:"
    << S3.length() << endl;
  S2++;
  cout << "|" << S2.getCString() << "| len:"
    << S2.length() << endl;*/

  cout << "|" << S2.getCString() << "| len:"
    << S2.length() << endl; 

  char* temp = S2.getCString();
  temp[0] = 'X';

  cout << "|" << S2.getCString() << "| len:"
    << S2.length() << endl;

 
  return 0;
}