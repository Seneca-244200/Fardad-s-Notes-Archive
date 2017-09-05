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
  virtual ostream& display()const{
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
  ostream& display()const{
    cout << "Derived, ";
    return Base::display() << ", " << derData;
  }
  void action1()const{
    cout << "derived action 1: ";
    display() << ", " << derData << endl;
  }
  ~Derived(){
    display() << " is gone" << endl;
  }
};

int main(){
  Derived A("A", 50);
  A.display() << endl;
  A.action1();
  A.action2();
  Base& B = A;
  cout << "-------Accessing using Base Referense" << endl;
  B.display() << endl;
  B.action1();
  B.action2();
  Base* Bp = &A;
  cout << "-------Accessing using Base Pointer" << endl;
  Bp->display() << endl;
  Bp->action1();
  Bp->action2();
  cout << "-------using overloaded operator<< for Base to display Derived" << endl;
  cout << A << endl;
  return 0;
}