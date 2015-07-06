#include <iostream>
#include <cstring>
using namespace std;
class Interface{
public:
  virtual ostream& display(ostream& os)const = 0;
  virtual void action1() = 0;
  virtual void action2() = 0;
};
ostream& operator<<(ostream& LO, const  Interface& RO){
  return RO.display(LO);
}




class Base: public Interface{
private:
  int baseData;
protected:
  char baseStr[2000];
public:
  Base(){
    strcpy(baseStr, "default base");
    baseData = 0;
  }
  Base(const char* str, int data = 0){
    strcpy(baseStr, "Crt Base ");
    strcat(baseStr, str);
    baseData = data;
  }
  Base(const Base& B){
    strcpy(baseStr, "copy ");
    strcat(baseStr, B.baseStr);
    baseData = B.baseData;
  }
  ostream& display(ostream& os)const{
    return os << baseStr << " with " << baseData;
  }
  void action1(){
    cout << "base action 1: ";
    display(cout) << endl;
  }
  void action2(){
    cout << "base action 2: ";
    display(cout) << endl;
  }
  ~Base(){
    display(cout) << " is gone" << endl;
  }
};

class Derived :public Base{
private:
  int derData;
public:
  Derived(){
    strcat(baseStr, " Derived");
    derData = 0;
  }
  Derived(const char* dataStr, int data) :Base(dataStr, data / 2){
    strcat(baseStr, " derived");
    derData = data;
  }
  Derived(const Derived& D):Base(D){
    derData = D.derData;
  }
  ostream& display(ostream& os)const{
    return Base::display(os) << ", " << derData;
  }
  void action1(){
    cout << "derived action 1: ";
    display(cout) <<", "<<derData<< endl;
  }
  void action2(){
    cout << "derived action 2: ";
    display(cout) << endl;
  }
  ~Derived(){
    display(cout) << " is gone" << endl;
  }
};

int main(){
  Base B;
  Derived D;
  Derived E;
  Interface* ip[3] = { &B, &D, &E };
  for (int i = 0; i < 3; i++){
    cout << *ip[i] << endl;
  }
  return 0;
}