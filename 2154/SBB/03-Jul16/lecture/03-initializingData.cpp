#include <iostream>
#include <cstring>
using namespace std;
class Base{

   int _data;
public:

   Base(int  data = 0 ):_data(data){  // initialize _data with the value
     // this->data(data);
   }
   void data(int value){
      _data = value;
   }
   void data(const int* valuePtr){
      _data = *valuePtr;
   }
   int data()const{
      return _data;
   }
   void act(){
      cout << "Base acting with " << _data << endl;
   }
   ostream& display(ostream& os)const{
      return os << "Base: " << _data;
   }
};

ostream& operator<<(ostream& os, const Base& B){
   return B.display(os);
}

class Derived :public Base{
   char _title[41];
public:
   Derived(){
      _title[0] = (char)0;
   }
   Derived(const char* title , int data ):Base(data){
      strncpy(_title, title, 40);
      _title[40] = (char)0;
   // no need anymore:    this->data(data);
   }
   ostream& display(ostream& os)const{
      return os << _title << ": " << data();
   }
};
void show(const Base* bptr, ostream& os){
   bptr->display(os) << endl;
}
int main(){
   int i = 10; // initialize
   int j;   // defaulted
   j = 10;  // set
   Derived D("Derived From Base", 300);
   cout << D << endl;
   show(&D, cout);
   return 0;
}