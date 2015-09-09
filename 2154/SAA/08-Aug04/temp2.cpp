#include <iostream>
using namespace std;

template <typename type>
type add(type n1, type n2){
  return n1 + n2;
}




int main(){
  int a;
  double b;
  char c;
  a = add(1, 3);
  b = add(1.1, 3.3);
  c = add('A', 'B');
  cout << a << "    " << b << "   " << c << endl;
  return 0;
}
