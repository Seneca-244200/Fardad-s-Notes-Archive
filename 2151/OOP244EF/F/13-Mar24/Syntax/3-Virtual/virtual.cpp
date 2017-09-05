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
  virtual void action1()const{
    cout << "base action 1: ";
    display() << endl;
  }
  void action2()const{
    cout << "base action 2: ";
    display() << endl;
  }
  virtual ~Base(){
    cout<<"Base is gone" << endl;
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
    cout << "Derived is gone" << endl;
  }
};


int main(){
  Base* p = new Derived("D", 100);
  delete p;
  return 0;
}
