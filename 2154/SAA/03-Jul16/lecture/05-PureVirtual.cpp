#include <iostream>
#include <cstring>
using namespace std;


class Base{
   int _data;
public:
   Base(int data = 0):_data(data){
     // this->data(data);
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
   virtual ostream& display(ostream& os)const = 0;
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
   Derived(const char* title, int data):Base(data){
      strncpy(_title, title, 40);
      _title[40] = (char)0;
   }
   ostream& display(ostream& os)const{
      return os << _title<< " has the value " << data();
   }
};
void show(const Base* bptr, ostream& os){
   bptr->display(os);
}
int main(){
   int i(10);
   int j;
   j = 10;

   Derived D;
   Derived D1("Derived Object" , 1000);
   D.data(300);
   cout <<  D << endl << D1 << endl;
   D.act();
   show(&D1, cout);
   return 0;
}