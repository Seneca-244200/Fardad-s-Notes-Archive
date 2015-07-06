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
    display() << " is created" << endl;
  }
  Base(const char* str, int data = 0){
    strcpy(baseStr, "Base ");
    strcat(baseStr, str);
    baseData = data;
    display() << " is created" << endl;
  }
  virtual ostream& display()const{
    return cout << baseStr << " with " << baseData;
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
 /* if Base did not have a default constructor:
    Derived():Base("defaulted"), derData(0){
    strcat(baseStr, " Derived");
  
  }*/
  Derived():derData(0){ // initializing derData to zero
    strcat(baseStr, " Derived");// possible because baseStr is protected and not private
    display() << " is created" << endl;
  }

  Derived(const char* dataStr, int data) :Base(dataStr, data / 2), derData(data){
    strcat(baseStr, " derived");
    display() << " is created" << endl;
  }
  ostream& display()const{
    cout << "Derived, ";
    return Base::display() << ", " << derData;
  }
  void action1()const{
    cout << "derived action 1: ";
    display() <<", "<<derData<< endl;
  }
  ~Derived(){
    display() << " is gone" << endl;
  }
};

int main(){
  cout << "--------Start main" << endl;
  Derived A("A", 50);
  A.display() << endl;
  A.action1();
  A.action2();
  cout << A << endl;
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
  cout << "--------End main" << endl;
  return 0;
}