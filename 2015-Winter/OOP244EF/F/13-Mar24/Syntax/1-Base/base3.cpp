#include <iostream>
#include <cstring>
using namespace std;
class Base{
  char baseStr[2000];
  int baseData;
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
  Base(const Base& B){
    strcpy(baseStr, "copy ");
    strcat(baseStr, B.baseStr);
    baseData = B.baseData;
  }
  Base& operator=(const Base& B){
    if (this != &B){
      strcat(baseStr, " = ");
      strcat(baseStr, B.baseStr);
      baseData = B.baseData;
    }
    return *this;
  }
  ostream& display()const{
    return cout << baseStr << " with " << baseData;
  }
  void action1()const{
    cout << "action 1: ";
    display() << endl;
  }
  void action2()const{
    cout << "action 2: ";
    display() << endl;
  }
  ~Base(){
    display() << " is gone" << endl;
  }
};

ostream& operator<<(ostream& ostr, const Base& B){
  return B.display();
}

int main(){
  Base B("B");
  cout << B << endl;
  Base C("C", 10);
  cout << C << endl;
  Base D = C;
  B = C;
  cout << D << endl;
  B.action2();
  C.action2();
  D.action2();
  return 0;
}