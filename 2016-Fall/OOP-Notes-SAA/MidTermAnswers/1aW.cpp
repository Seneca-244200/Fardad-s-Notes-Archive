







#include <iostream>
using namespace std;

class Int {
private:
   int data_;
public:
   Int(int data = 0) {
      data_ = data;
      cout << "CRT" << data_ << endl;
   }
   Int(const Int& I) {
      data_ = I.data_ + 1;
      cout << "CPY" << data_ << endl;
   }
   Int& operator=(const Int& I) {
      data_ = I.data_ + 2;
      cout << "SET" << data_ << endl;
      return *this;
   }
   Int& operator=(int data) {
      data_ = data;
      cout << "ASN" << data_ << endl;
      return *this;
   }
   ~Int() {
      cout << "~D" << data_ << endl;
   }
   void Prn() {
      cout << data_ << endl;
   }
};


void show(Int s) {
   s.Prn();
}
void disp(Int& s) {
   s.Prn();
}
void prnt(Int* sptr) {
   sptr->Prn();
}

int main() {
   Int a;
   Int b = 1;
   Int c = b;
   Int* d = new Int(4);
   a.Prn();
   b.Prn();
   c.Prn();
   a = *d = 4;
   prnt(d);
   delete d;
   show(a);
   disp(b);
   prnt(&c);
   return 0;
}

/* output
CRT0
CRT1
CPY2
CRT4
0
1
2
ASN4
SET6
4
~D4
CPY7
7
~D7
1
2
~D2
~D1
~D6
*/

//Q2: 2marks
//Q3: 4marks
//Q5: 2 marks