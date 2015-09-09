#include <iostream>
using namespace std;
#include "template.h"
class Container{
  int a;
public:
  Container(int v = 0) :a(v){}
  Container operator+(const Container& C)const{
    Container R(a + C.a);
    return R;
  }
  bool operator>(const Container& C)const{
    return a > C.a;
  }
  ostream& display(ostream& ostr)const{
    return ostr << a;
  }
};
ostream& operator<<(ostream& ostr, const Container& C){
  return C.display(ostr);
}

int main(){
  int a;
  double b,c;
  char name1[] = "Fardad",
    name2[] = "Fardood";
  Container A, B = 100, C = 200;
  const char* str;
  a = max(1, 3);
  c = max<double>(1, 3);
  b = max(1.1, 3.3);
  str = max(name1, name2);
  cout << a << "    " << b << "   " <<str<< endl;
  A = max(B, C);
  cout << A << " is the greater of the two!" << endl;
  return 0;
}
