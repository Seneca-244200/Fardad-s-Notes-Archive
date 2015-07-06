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
  ostream& display(){
    return cout << baseStr << " with " << baseData;
  }
  void action1(){
    cout << "action 1: ";
    display() << endl;
  }
  void action2(){
    cout << "action 2: ";
    display() << endl;
  }
  ~Base(){
    display() << " is gone" << endl;
  }
};

int main(){
  Base B;              
  B.display() << endl;
  if (true){
    Base II("In If");
    II.display() << endl;
    II.action1();
    B.action1();
  }
  Base C("C", 10);
  C.display() << endl;
  //Base D = C;
  //D.display() << endl;
  //B = C;
  //B.display() << endl;
  B.action2();
  C.action2();
  return 0;
}