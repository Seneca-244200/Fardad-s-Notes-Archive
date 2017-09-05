#include <iostream>
using namespace std;
class OneInteger {
private:
   long* data_;
public:
   //A-
   OneInteger(long data = 0);
   OneInteger(const OneInteger& I);
   OneInteger& operator=(const OneInteger& I);
   ~OneInteger();
   //B-
   bool operator<(const OneInteger& ro)const;
   //C-
   OneInteger& operator+=(long d);
   //I-
   OneInteger operator+(const OneInteger& I)const;
   //E-
   void read();
   //F-
   void print()const;
   //G-
   void operator~()const;
};
// Total 18 marks
//A-
OneInteger::OneInteger(long data) { // 2
   data_ = new long;
   *data_ = data;
}
OneInteger::OneInteger(const OneInteger& I) { // 2
      data_ = new long;
      *data_ = *I.data_;
}
OneInteger& OneInteger::operator=(const OneInteger& I) { // 3
   if (this != &I) {
      data_ = new long;
      *data_ = *I.data_;
   }
   return *this;
}
OneInteger::~OneInteger() { // 1
   delete data_;
}
//B-       1
bool OneInteger::operator>(const OneInteger& ro)const {
   return *data_ > *ro.data_;
}
//C-       2
OneInteger& OneInteger::operator+=(long d) {
   *data_ += d;
   return *this;
}
//I-        3
OneInteger OneInteger::operator+(const OneInteger& I)const {
   return OneInteger(*data_ + *I.data_);
}
//E-        1
void OneInteger::read() {
   cin >> *data_;
}
//F-        2
void OneInteger::print()const {
   cout << *data_;
}
//G-        1
void OneInteger::operator~()const {
   print(); cout << endl;
}

int main() {
   OneInteger a, b = 1, c = 2, d = c, e = 3 , f= 4;
   a.print(); cout << endl; // prints 0
   a = b;
   a.print(); cout << endl; // prints 1
   b.print(); cout << endl; // prints 1
   d.print(); cout << endl; // prints 2
   cout << (b < c) << endl; // prints 1
   cout << (c < b) << endl; // prints 0
   a = b += 1.1;
   ~a;   // prints 2
   ~b;   // prints 2
   a = e + f;
   ~a;   // prints 7
   ~e;   // prints 3
   ~f;   // prints 4
   return 0;
}

/* output
0
1
1
2
1
2
2
7
3
4
*/