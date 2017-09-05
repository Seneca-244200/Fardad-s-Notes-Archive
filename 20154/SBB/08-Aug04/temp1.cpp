#include <iostream>
using namespace std;


template <typename type>
type add(type a, type b){
  return a + b;
}

int main(){
  int a;
  double b;
  char c;
  a = add(1, 3);
  b = add(1.1, 3.3);
  c = add('A', 'B');
  cout << a << "    " << b << endl;
  return 0;
}

