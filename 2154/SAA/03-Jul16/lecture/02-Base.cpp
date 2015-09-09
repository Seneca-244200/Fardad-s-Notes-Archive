#include <iostream>
using namespace std;


class Base{
   int _data;
public:
   //Base(int thedata = 0){
   //   data(thedata);
   //}
   Base(int data = 0){
      this->data(data);
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


int main(){
   Base B;
   Base B1(100);
   cout << B << endl << B1 << endl;
   return 0;
}