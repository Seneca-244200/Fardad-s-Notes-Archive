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
  return B.display(ostr);
}


class Derived :public Base{
private:
  int derData;
public:
  /* if Base does not have a default constructor:
  Derived():Base("defaulted"), derData(0){
  strcat(baseStr, " Derived");
  }
  */
  Derived() :derData(0){ // initializing derData to zero
    strcpy(baseStr, "defaulted Derived");// possible because baseStr is protected and not private
    cout << "default-derived(" << baseStr << ", " << 0 << ") is created" << endl;
  }

  Derived(const char* dataStr, int data) :Base(dataStr, data / 2), derData(data){
    strcpy(baseStr, dataStr);
    cout << "derived(" << baseStr << ", " << data << ") is created" << endl;
  }
  ostream& display(ostream& ostr = cout)const{
    ostr << "Derived from ";
    return Base::display(cout);
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
  cout << "--------Start main" << endl;
  Base B("B", 100);
  B.display() << endl;
  B.action1();
  B.action2();
  cout << "--------Calling Derived stuff normally" << endl;
  Derived A("A", 50);
  A.display() << endl;
  A.action1();
  A.action2();
  //A.Base::action1(); // in case you need to call the parents action
  cout << "--------Calling Derived stuff using parents ref" << endl;
  Base& br = A;
  br.display() << endl;
  br.action1();
  br.action2();
  cout << "--------Calling Derived stuff using parents ptr" << endl;
  Base* bp = &A;
  bp->display() << endl;
  bp->action1();
  bp->action2();
  cout << "--------Displaying Derived using Base's operator<< overload" << endl;
  cout << A << endl;
  cout << "--------End main" << endl;
  return 0;
}