#include <iostream>
using namespace std;

int add(int n1, int n2){
  return n1 + n2;
}

double add(double n1, double n2){
  return n1 + n2;
}


int main(){
  int a;
  double b;
  a = add(1, 3);
  b = add(1.1, 3.3);
  cout << a << "    " << b << endl;
  return 0;
}
