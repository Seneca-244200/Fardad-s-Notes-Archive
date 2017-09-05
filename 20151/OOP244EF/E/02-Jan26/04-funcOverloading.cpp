//  int add(int, int);
// add_int_int
//  double add(double, double)
// add_double_double
#include <iostream>
using namespace std;

int add(int a, int b){
  return a + b;
}
double add(double a, double b){
  return a + b;
}
int add(int a, int b, int c){
  return a + b + c;
}
int main(){
  cout << add(10, 20) << endl;
  cout << add(10.2, 20.3) << endl;
  cout << add(10, 20, 30) << endl;
  return 0;
}
