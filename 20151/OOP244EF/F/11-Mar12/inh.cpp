#include <iostream>
#include <new>
using namespace std;
bool debug = true;
class Base{
private:
  char _ch;
  int* _data;
  void set(int data, char ch){
    _data = (int*)0;
    this->data(data);
    _ch = ch;
  }
public:
  Base(){
    _data = (int*)0;
    _ch = ' ';
    if (debug) cout << "Def Base." <<endl;
  }
  Base(int data, char ch = 'X'){
    set(data, ch);
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
  void data(int value){ // setter
    if (_data) delete _data;
    _data = new (nothrow) int;
    *_data = value;
  }
  int data()const{  // getter
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
  ostream& display(ostream& os = cout)const{
    return os << "Dsp Base with: " << *_data << " " << _ch;
  }
};
const Base& foo(const Base& B){
  B.display() << endl;
  return B;
}
int main(){
  Base B[3] = { 10, 20, 30 };
  Base C[4] = { Base(10, 'a'), Base(30, 'y'), Base(300) };

  cout << "------------ End of main" << endl;;
  return 0;
}