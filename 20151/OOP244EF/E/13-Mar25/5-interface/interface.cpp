#include <iostream>
#include <cstring>
using namespace std;
class Streamable{
public:

  virtual ostream& display(ostream& ostr)const = 0;
  virtual istream& read(istream& istr) = 0;

  virtual ~Streamable(){};
};
ostream& operator<<(ostream& ostr, const Streamable& B){
  return B.display(ostr);
}
istream& operator>>(istream& ostr, Streamable& B){
  return B.read(ostr);
}


class Derived1 :public Streamable{
private:
  int data;
protected:
  char str[2000]; public:
    /* if Base does not have a default constructor:
    Derived1():Base("defaulted"), data(0){
    strcat(str, " Derived1");
    }
    */
    Derived1() :data(0){ // initializing data to zero
      strcpy(str, "defaulted Derived1");// possible because str is protected and not private
      cout << "default-Derived1(" << str << ", " << 0 << ") is created" << endl;
    }

    Derived1(const char* dataStr, int data) :data(data){
      strcpy(str, dataStr);
      cout << "Derived1(" << str << ", " << data << ") is created" << endl;
    }
    ostream& display(ostream& ostr)const{
      return ostr << "Derived1 (" << str <<", " << data << ")";
    }
    istream& read(istream& istr){
      cout << "D1 STR: ";
      istr.getline(str,1999, '\n');
      cout << "D1 data: ";
      istr >> data;
      istr.ignore(2000, '\n');
      return istr;
    }
    void action1()const{
      cout << "Derived1 action 1: ";
    }
    ~Derived1(){
      cout<<"Derived1 is gone" << endl;
    }
};

class Derived2 :public Streamable{
private:
  int data;
protected:
  char str[2000]; public:
    /* if Base does not have a default constructor:
    Derived2():Base("defaulted"), data(0){
    strcat(str, " Derived2");
    }
    */
    Derived2() :data(0){ // initializing data to zero
      strcpy(str, "defaulted Derived2");// possible because str is protected and not private
      cout << "default-Derived2(" << str << ", " << 0 << ") is created" << endl;
    }

    Derived2(const char* dataStr, int data) :data(data){
      strcpy(str, dataStr);
      cout << "Derived2(" << str << ", " << data << ") is created" << endl;
    }
    ostream& display(ostream& ostr)const{
      return ostr << "Derived2 (" << str << ", " << data << ")";
    }
    istream& read(istream& istr){
      cout << "D2 STR: ";
      istr.getline(str, 1999, '\n');
      cout << "D2 data: ";
      istr >> data;
      istr.ignore(2000, '\n');
      return istr;
    }
    void action1()const{
      cout << "Derived2 action 1: ";
    }
    ~Derived2(){
      cout << "Derived2 is gone" << endl;
    }
};

void foo(){
  cout << " ----------- Start Foo" << endl;
  Streamable* s[4] = { new Derived1, new Derived2, new Derived1, new Derived2 };
  int i;
  for (i = 0; i < 4; i++){
    cout << "Streamable " << (i + 1) << ":" << endl;
    cin >> *s[i];
  }
  for (i = 0; i < 4; i++){
    cout << "Streamable " << (i + 1) << ":" << endl;
    cout << *s[i] << endl;
  }
  for (i = 0; i < 4; i++){
    delete s[i];
  }
  cout << " ----------- End Foo" << endl;

}

int main(){
  cout << " ----------- Start main" << endl;
  int i;
 /* Derived1 d1("D1", 100);
  cout << d1 << endl;
  cin >> d1;
  cout << d1 << endl;*/
  foo();
  cout << " ----------- End MAIN" << endl;
  return 0;
}

