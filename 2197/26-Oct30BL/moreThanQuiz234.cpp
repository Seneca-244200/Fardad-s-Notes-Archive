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
   ODI& operator+=(const ODI& RO) {
      *intPtr += *RO.intPtr;
      return *this;
   }
   ODI operator-(const ODI& RO)const {
      ODI result(*this);
      *result.intPtr -= *RO.intPtr;
      return result;
   }
   friend ODI& operator += (ODI& LO, const ODI& RO);
   friend ODI operator - (const ODI& LO, const ODI& RO);
};

ODI& operator += (ODI& LO, const ODI& RO) {
   *LO.intPtr += *RO.intPtr;
   return LO;
}
ODI operator - (const ODI& LO, const ODI& RO) {
   ODI result(LO);
   *result.intPtr -= *RO.intPtr;
   return result;
}
