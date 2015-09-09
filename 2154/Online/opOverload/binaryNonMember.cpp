/*
RV = LO + RO  Binary
!A   normal Unary
+ B
- a
k++;  exp unary operator(Only in C)
j--;
A + B   binary operator with no side effect
A = B   binary operator with side effect
A += B
*/
#include <iostream>
using namespace std;

class Container{
  int _data;
public:
  Container(int data = 0) :_data(data){}
  int data(){ return _data; }
  void data(int val){ _data = val; }
  void display(){ cout << _data; }
};

Container operator+(Container left, Container right){
  Container temp(left.data() + right.data());
  return temp;
}

int main(){
  Container A(10), B(20), C;
  A.display();
  cout << endl;
  B.display();
  cout << endl;
  C.display();
  cout << endl;
//  C.data(A.data() + B.data());
//  C = add(A, B);
  C.display();
  cout << endl;
//  C = operator+(A, B);
  C = A + B;
  C.display();
  cout << endl;

  cout << endl;
  return 0;
}           