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
int main(){
  Base B = "B";
  B.display() << endl;
  Base("X").display() << endl;
  B.action1();
  return 0;
}