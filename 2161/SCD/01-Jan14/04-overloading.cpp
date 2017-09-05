#include <iostream>
using namespace std;
int add(int a, int b){
  return a + b;
}
double add(double a, double b){
  return a + b;
}

int main(){
  cout << add(1, 3) << endl;
  cout << add(1.1, 3.2) << endl;
  return 0;
}
