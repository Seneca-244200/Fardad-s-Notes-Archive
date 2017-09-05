#include <iostream>
using namespace std;
class OneDouble {
private:
   double* data_;
public:
   //A-
   OneDouble(double data = 0.0);
   OneDouble(const OneDouble& D);
   OneDouble& operator=(const OneDouble& D);
   ~OneDouble();
   //B-
   bool operator<(const OneDouble& ro)const;
   //C-
   OneDouble& operator+=(double d);
   //D-
   OneDouble operator+(const OneDouble& D)const;
   //E-
   void read();
   //F-
   void print()const;
   //G-
   void operator~()const;
};
// Total 18 marks
//A-
OneDouble::OneDouble(double data) { // 2
   data_ = new double;
   *data_ = data;
}
OneDouble::OneDouble(const OneDouble& D) { // 2
      data_ = new double;
      *data_ = *D.data_;
}
OneDouble& OneDouble::operator=(const OneDouble& D) { // 3
   if (this != &D) {
      *data_ = *D.data_;
   }
   return *this;
}
OneDouble::~OneDouble() { // 1
   delete data_;
}
//B-       1
bool OneDouble::operator<(const OneDouble& ro)const {
   return *data_ < *ro.data_;
}
//C-       2
OneDouble& OneDouble::operator+=(double d) {
   *data_ += d;
   return *this;
}
//D-        3
OneDouble OneDouble::operator+(const OneDouble& D)const {
	OneDouble D(*data_ + *D.data_);
   return D;
}
//E-        1
void OneDouble::read() {
   cin >> *data_;
}
//F-        2
void OneDouble::print()const {
   cout << *data_;
}
//G-        1
void OneDouble::operator~()const {
   print(); cout << endl;
}

int main() {
   OneDouble a, b = 1.1, c = 2.2, d = c, e = 3.3 , f= 4.4;
   a.print(); cout << endl; // prints 0
   a = b;
   a.print(); cout << endl; // prints 1.1
   b.print(); cout << endl; // prints 1.1
   d.print(); cout << endl; // prints 2.2
   cout << (b < c) << endl; // prints 1
   cout << (c < b) << endl; // prints 0
   a = b += 1.1;
   ~a;   // prints 2.2
   ~b;   // prints 2.2
   a = e + f;
   ~a;   // prints 7.7
   ~e;   // prints 3.3
   ~f;   // prints 4.4
   return 0;
}

/* output
0
1.1
1.1
2.2
1
2.2
2.2
7.7
3.3
4.4
*/