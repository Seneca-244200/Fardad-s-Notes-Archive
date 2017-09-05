#include <iostream>
using namespace std;
Int operator-(const Int& lo, const Int& ro);/// yuckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
ostream& operator<<(ostream& coutRef, const Int& ro);
istream& operator>> (istream& cinRef, Int& ro);
int operator+(int x, const Int& ro);

class Float {
private:
   float
      data_;
public:
   Float(float data = 0.0) {
      data_ = data;
   }
   float getData()const {
      return data_;
   }

};
class Int {
private:
   int
      data_;
public:
   Int(int data = 0) {
      data = data_;
   }
   Int& operator=(const Float& f) {
      data_ = f.getData();
      return *this;
   }
   Int operator+(const Int& ro)const {
      Int I(data_ + ro.data_);
      return I;
   }
   Int& operator++() {
      data_++;
      return *this;
   }
   Int operator++(int) {
      Int copy = *this;
      data_++;
      return copy;
   }
   int getData()const {
      return data_;
   }
   ostream& display(ostream& coutRef)const {
      return coutRef << data_;
   }
   friend Int operator-(const Int& lo, const Int& ro);/// yuckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
   friend istream& operator >> (istream& cinRef, Int& ro);  // Yuck but not as the other one
};

int main() {
   Float
      f;
   Int a, b = 5, c = 10, d;
   int i = 10, j;
   a = b + c;
   a = b - c;
   a = ++b;
   a = b++;
   j = i + a;
   a = f;

}
int operator+(int x, const Int& ro) {
   return x + ro.getData();
}

istream& operator >> (istream& cinRef, Int& ro) {
   return cinRef >> ro.data_;
}

ostream& operator<<(ostream& coutRef, const Int& ro) {
   return ro.display(coutRef);
}

Int operator-(const Int& lo, const Int& ro) { /// yuckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
   Int I(lo.data_- ro.data_);
   return I;
}