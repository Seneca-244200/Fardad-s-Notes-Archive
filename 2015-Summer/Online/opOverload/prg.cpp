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
  int data()const{ return _data; }
  void data(int val){ _data = val; }
  void display(){ cout << _data; }
  Container add(Container right)const{
    Container temp(_data + right.data());
    return temp;
  }
  Container operator+(Container right)const{
    Container temp(_data + right.data());
    return temp;
  }  
  Container operator+=(Container right){
    _data += right.data();
    return *this;
  }
  Container operator++(){
    _data++;
    return *this;
  }
/*  Container operator--(int){ this will not work like regular postfix --
    _data--;
    return *this;
  }*/
  Container operator--(int){   // playing a trick to make postfix --  work like postfix -- 
    Container keep = *this;    // with an integer
    _data--;
    return keep;
  }
};

ostream& operator<<(ostream& output,const Container& C){
  output << C.data();
  return output;
}

int main(){
  Container A(10), B(20), C;
//  C = A.add(B);
//  C = A.operator+(B);
  C = A + B;
  C.display();
  cout << endl;
  A += B;
  ++B;
  C = B--;
  int i = 10, j;
  j = i--;
  cout << A <<", "<<B<<", " <<C << endl;
  return 0;
}           