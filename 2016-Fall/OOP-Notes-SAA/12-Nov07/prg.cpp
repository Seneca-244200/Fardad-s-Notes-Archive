#include <iostream>
using namespace std;
class Base {
private:
   int data_;
   double& outsider;
public:
   Base(int data, double& SomethingOutthere): outsider(SomethingOutthere)  {
      data_ = data;
   }
   Base(const Base& B) {
      data_ = B.data_;
   }
   ~Base() {

   }
   ostream& show(ostream& os)const {
      os << data_;
   }
   void workWith(int data) {
      data_ = data + 10;
   }
};
ostream& operator<<(ostream& os, const Base& B) {
   return B.show(os);
}

int main() {
   double something;
   Base B(10, something);
}