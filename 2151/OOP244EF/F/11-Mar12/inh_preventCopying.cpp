#include <iostream>
#include <new>
using namespace std;
class Base{
private:
  int* _data;
  Base(const Base& B){}
  void operator=(const Base& B){}
public:
  Base(){
    _data = (int*)0;
  }
  Base(int data){
    _data = (int*)0;
    this->data(data);
  }
  void data(int value){ // setter
    if (_data) delete _data;
    _data = new (nothrow) int;
    *_data = value;
  }
  int data()const{  // getter
    return *_data;
  }
  ~Base(){
    if (_data){
      delete _data;
    }
  }
};


class Derived :public Base{
 
};

int main(){
  Base B1(20);
  Base B2 = B1;
  return 0;
}