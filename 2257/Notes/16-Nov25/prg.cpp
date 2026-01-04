#include <iostream>
#include <iomanip>
using namespace std;
class Int {
   int nop{};
   int val;
public:
   Int(int v) :val(v) {}
   ostream& print(ostream& ostr = cout)const {
      int* nopPtr = const_cast<int*>(&nop);
      (*nopPtr)++;
      return ostr << val;
   }
   int noOfPrints()const {
      return nop;
   }
};

class Base {
public:
   virtual ~Base() = default;
};
class Derived : public Base {
public:
};

int main() {
   Int I = 10;
   int a;
   double d = 1.234;
   double ar[3] = { 1.23, 2.34, 3.45 };
   a = static_cast<int>(d);
   unsigned char* c = reinterpret_cast<unsigned char*>(ar);
   for (int i = 0; i < sizeof(double) * 3; i++) {
      cout << hex << static_cast<int>(c[i]) << " " << dec;
   }
   cout << endl;
   I.print() << endl;
   I.print() << endl;
   I.print() << endl;
   I.print() << endl;
   cout << "printed " << I.noOfPrints() << " times" << endl;

   Derived D;
   Base* b = &D;
   Base B;

   Derived* dptr1 = dynamic_cast<Derived*>(b); // this will be address of D

   Derived* dptr2 = dynamic_cast<Derived*>(&B); // will return nullptr because there is not Derived


   return 0;
}