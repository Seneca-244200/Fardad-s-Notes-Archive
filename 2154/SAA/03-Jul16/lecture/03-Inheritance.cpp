#include <iostream>
#include <cstring>
using namespace std;


class Base{
   int _data;
public:
   Base(int data = 0):_data(data){  // initialized _data by data
     // this->data(data);    // set _data after geting created with garbage in it.
   }
   void data(int value){
      _data = value;
   }
   int data()const{
      return _data;
   }
   void act(){
      cout << "Base acting with " << data() << endl;
   }
   ostream& display(ostream& os)const{
      return os << "Base is holding " << data();
   }
};

ostream& operator<<(ostream& os, const Base& B){
   return B.display(os);
}
class Derived :public Base{
   char _title[41];
public:
   Derived(){
      strcpy(_title, "No name");
      data(0);
   }
   Derived(const char* title, int data):Base(data){ // intialized Base with data
      strncpy(_title, title, 40);
      _title[40] = (char)0;
      // this->data(data); // set the data of Base after Base is defaulted.
   }
   ostream& display(ostream& os)const{
      return os << _title<< " has the value " << data();
   }
};

int main(){
   int i(10); // initialized
   int j;     // defaulted   
   j = 10;    // then set to value
   Derived D;
   Derived D1("Derived Object" , 1000);
   D.data(300);
   D.display(cout) << endl;
   D1.display(cout) << endl;
   return 0;
}