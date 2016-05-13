#include <iostream>
using namespace std;
class Faa{
public:
  Faa(int i);
};
class Foo{
public:
  Foo(Faa f);
};

int main(){

  Foo(20);


  int i;
  int j;
  int& a = i;
  int* p;
  p = &i;

  p = &j;

  a = j;
  return 0;
}