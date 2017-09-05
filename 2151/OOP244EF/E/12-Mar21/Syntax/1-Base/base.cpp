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
    display() << " is created" << endl;
  }
  Base(const char* str, int data = 0){
    strcpy(baseStr, "Base ");
    strcat(baseStr, str);
    baseData = data;
    display() << " is created" << endl;
  }
  Base(const Base& B){
    strcpy(baseStr, "copy ");
    strcat(baseStr, B.baseStr);
    baseData = B.baseData;
    display() << " is created" << endl;
  }
  Base& operator=(const Base& B){
    if (this != &B){
      strcat(baseStr, " = ");
      strcat(baseStr, B.baseStr);
      baseData = B.baseData;
    }
    display() << endl;
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
void callAction1(const Base& B1){
  B1.action1();
}
const Base& callAction2(const Base& B2){
  B2.action2();
  return B2;
}
ostream& operator<<(ostream& LO, const Base& RO){
  RO.display();
  return LO;
}
int main(){
  cout << "------start main" << endl;
  Base X("X", 20);
  callAction1(callAction2(X));
  cout << X << endl;
  cout << "------end main" << endl;
  return 0;
}