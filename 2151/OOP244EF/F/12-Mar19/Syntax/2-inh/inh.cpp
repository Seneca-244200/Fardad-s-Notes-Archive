#include <iostream>
#include <cstring>
using namespace std;
class Base{
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
    strcpy(baseStr, "Base ");
    strcat(baseStr, str);
    baseData = data;
  }
  ostream& display()const{
    return cout << baseStr << " with " << baseData;
  }
  void action1()const{
    cout << "base action 1: ";
    display() << endl;
  }
  void action2()const{
    cout << "base action 2: ";
    display() << endl;
  }
  ~Base(){
    display() << " is gone" << endl;
  }
};
ostream& operator<<(ostream& ostr, const Base& B){
  return B.display();
}

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
  ostream& display(){
    return Base::display() << ", " << derData;
  }
  void action1(){
    cout << "derived action 1: ";
    display() <<", "<<derData<< endl;
  }
  void action2(){
    cout << "derived action 2: ";
    display() << endl;
  }
  ~Derived(){
    display() << " is gone" << endl;
  }
};

int main(){
  Derived A;
  A.display() << endl;
  Derived B("B", 10);
  B.display() << endl;
  Base* p = &B;
  p->action1();
  p->action2();
  p->display() << endl;
  Base& r = B;
  r.action1();
  r.action2();
  r.display() << endl;

  return 0;
}