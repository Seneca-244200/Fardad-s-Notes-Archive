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
    strcpy(baseStr, "defaulted");
    baseData = 0;
    cout << "default-base(" << baseStr << ", " << baseData << ") is created" << endl;
  }
  Base(const char* str, int data = 0){
    strcpy(baseStr, str);
    baseData = data;
    cout << "base(" << baseStr << ", " << baseData << ") is created" << endl;
  }
  virtual ostream& display(ostream& ostr = cout)const{
    return ostr << "base: [" << baseStr << ", " << baseData << "]";
  }
  virtual void action1()const{
    cout << "base action 1: ";
    display() << endl;
  }
  virtual void action2()const{
    cout << "base action 2: ";
    display() << endl;
  }
  ~Base(){
    cout << "~base(" << baseStr << ", " << baseData << ") is gone" << endl;
  }
};
ostream& operator<<(ostream& ostr, const Base& B){
  return B.display();
}


class Derived1 :public Base{
private:
  int derData;
public:
  /* if Base does not have a default constructor:
  Derived1():Base("defaulted"), derData(0){
  strcat(baseStr, " Derived1");
  }
  */
  Derived1() :derData(0){ // initializing derData to zero
    strcpy(baseStr, "defaulted Derived1");// possible because baseStr is protected and not private
    cout << "default-Derived1(" << baseStr << ", " << 0 << ") is created" << endl;
  }

  Derived1(const char* dataStr, int data) :Base(dataStr, data / 2), derData(data){
    strcpy(baseStr, dataStr);
    cout << "Derived1(" << baseStr << ", " << data << ") is created" << endl;
  }
  ostream& display(ostream& ostr = cout)const{
    ostr << "Derived1 from ";
    return Base::display(cout);
  }
  void action1()const{
    cout << "Derived1 action 1: ";
    display() << ", " << derData << endl;
  }
  ~Derived1(){
    display() << " is gone" << endl;
  }
};


class Derived2 :public Base{
private:
  int derData;
public:
  /* if Base does not have a default constructor:
  Derived2():Base("defaulted"), derData(0){
  strcat(baseStr, " Derived2");
  }
  */
  Derived2() :derData(0){ // initializing derData to zero
    strcpy(baseStr, "defaulted Derived2");// possible because baseStr is protected and not private
    cout << "default-Derived2(" << baseStr << ", " << 0 << ") is created" << endl;
  }

  Derived2(const char* dataStr, int data) :Base(dataStr, data / 2), derData(data){
    strcpy(baseStr, dataStr);
    cout << "Derived2(" << baseStr << ", " << data << ") is created" << endl;
  }
  ostream& display(ostream& ostr = cout)const{
    ostr << "Derived2 from ";
    return Base::display(cout);
  }
  void action1()const{
    cout << "Derived2 action 1: ";
    display() << ", " << derData << endl;
  }
  ~Derived2(){
    display() << " is gone" << endl;
  }
};


int main(){
  cout << "--------Start main" << endl;
  Base B("B", 50);
  Derived1 x("D1", 50);
  Derived2 y("D2", 50);
  Base* p[3] = { &B, &x, &y };
  cout << "--------Display using cout" << endl;
  for (int i = 0; i < 3;i++)
    cout << *p[i] << endl;
  cout << "--------End main" << endl;
  return 0;
}