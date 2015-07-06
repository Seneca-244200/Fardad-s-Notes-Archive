#include <iostream>
#include <new>
using namespace std;
bool debug = true;
class Coor{
  int _x;
  int _y;
public:
  Coor(int x=0, int y=0){
    set(x, y);
  }
  void set(int x, int y){
    _x = x;
    _y = y;
  }
  ostream& display(ostream& os)const{
    return os << "X: " << _x << ", Y: " << _y;
  }
};
ostream& operator<<(ostream& os, const Coor& C){
  return C.display(os);
}
class Base{
private:
  char _ch;
  Coor* _data;
  void set(Coor data, char ch){
    _data = (Coor*)0;
    this->data(data);
    _ch = ch;
  }
public:
  Base(){
    _data = (Coor*)0;
    _ch = ' ';
    if (debug) cout << "Def Base." << endl;
  }
  Base(char ch){
    set(Coor(0, 0), ch);
    if (debug) cout << "Crt Base with ch only: " << *_data << " " << ch << endl;
  }
  Base(Coor data, char ch = 'X'){
    set(data, ch);
    if (debug) cout << "Crt Base: " << *_data << " " << ch << endl;
  }
  Base(int x, int y, char ch = 'X'){
    set(Coor(x, y), ch);
    if (debug) cout << "Crt Base: " << *_data << " " << ch << endl;
  }
  Base(const Base& B){
    set(*B._data, B._ch);
    if (debug) cout << "CP Base: " << *_data << " " << _ch << endl;
  }
  Base& operator=(const Base& B){
    if (&B != this){
      if (_data) delete _data;
      set(*B._data, B._ch);
      if (debug) cout << "Assign Base: " << *_data << " " << _ch << endl;
    }
    return *this;
  }
  void data(Coor value){ // setter
    if (_data) delete _data;
    _data = new (nothrow) Coor;
    *_data = value;
  }
  Coor data()const{  // getter
    return *_data;
  }
  ~Base(){
    if (debug) cout << "Killing Base: ";
    if (_data){
      if (debug) cout << *_data;
      delete _data;
    }
    if (debug) cout << " " << _ch << endl;
  }
  void display()const{
    if (_data)
      cout << "Dsp Base with: " << *_data << " " << _ch << endl;
    else
      cout << "Unset Base!" << endl;
  }
};
Base& foo(Base& BB){
  BB.display();
  return BB;
}
int main(){
  Base A(10, 20, 'A');
  Base B;
  B = foo(A);
  A.display();
  B.display();
  return 0;
}