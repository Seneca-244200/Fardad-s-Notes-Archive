// attendance for this lab:
// 244/NBB/WS05.5/attendance

class ODI {
   int* intPtr;
public:
   ostream& display(ostream& os = cout);
   istream& read(istream& is = cin);
   // Q2
   ODI() :intPtr(nullptr) {}
   ODI(const ODI& CP) {
      intPtr = new int;
      *intPtr = *CP.intPtr;
   }
   ~ODI() {
      delete intPtr;
   }
   //Q3
   ODI& operator+=(const ODI& RO);
   ODI operator-(const ODI& RO)const;
};

ODI& operator += (ODI& LO, const ODI& RO);
ODI operator - (const ODI& LO, const ODI& RO);

ostream& operator<<(ostream& os, const ODI& RO);
istream& operator>>(istream& is, ODI& RO) {
   return RO.read(is);
}


void foo() {
   int a, b, c;
   a = b += c;
   a = b - c;
}