class OneDynamicDouble {
   double* oneIntPtr;
public:
   ostream& display(ostream& os = cout);
   istream& read(istream& is = cin);
   OneDynamicDouble() :oneIntPtr(nullptr) {}
   OneDynamicDouble(const OneDynamicDouble& cp) {
      oneIntPtr = new double;
      *oneIntPtr = *cp.oneIntPtr;
   }
   ~OneDynamicDouble() {
      delete oneIntPtr;
   }
   OneDynamicDouble& operator -=(const OneDynamicDouble& RO);
   OneDynamicDouble 
      operator +(const OneDynamicDouble& RO)const;
};
OneDynamicDouble&
   operator -=(OneDynamicDouble& LO,
              const OneDynamicDouble& RO);
OneDynamicDouble
      operator +(const OneDynamicDouble& LO,
                const OneDynamicDouble& RO);
ostream& operator<<(ostream& os, 
                const OneDynamicDouble& RO) {
   return RO.display(os);
}
istream& operator>>(istream& os, OneDynamicDouble& RO);


void foo() {
   int a, b, c;
   a = b -= c;

   a = b + c;
}
