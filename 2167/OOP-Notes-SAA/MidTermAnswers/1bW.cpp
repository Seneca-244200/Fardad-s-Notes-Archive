#include <iostream>
using namespace std;

class Int {
private:
   int data_;
public:
   Int(int data = 0) {
      data_ = data;
      cout << "MKE " << data_ << endl;
   }
   Int(const Int& I) {
      data_ = I.data_ + 1;
      cout << "RAP " << data_ << endl;
   }
   Int& operator=(const Int& I) {
      data_ = I.data_ + 2;
      cout << "ASN " << data_ << endl;
      return *this;
   }
   Int& operator=(int data) {
      data_ = data;
      cout << "SET " << data_ << endl;
      return *this;
   }
   ~Int() {
      cout << "REM " << data_ << endl;
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


/* output 19 marks
MKE 0
MKE 1
RAP 2
MKE 4
0
1
2
SET 4
ASN 6
4
REM 4
RAP 7
7
REM 7
1
2
REM 2
REM 1
REM 6
*/

//Q2: 2marks
//Q3: 4marks
//Q5: 2 marks