class OneDynamicDouble {
   double* oneDoublePtr;
public:
   ostream& display(ostream& os = cout);
   istream& read(istream& is = cin);
   OneDynamicDouble() :oneDoublePtr(nullptr) {}
   OneDynamicDouble(const OneDynamicDouble& cp) {
      oneDoublePtr = new double;
      *oneDoublePtr = *cp.oneDoublePtr;
   }
   ~OneDynamicDouble() {
      delete oneDoublePtr;
   }
   OneDynamicDouble& operator -=(const OneDynamicDouble&);

};

OneDynamicDouble& 
    operator=-(OneDynamicDouble& LO,const OneDynamicDouble& Ro);
void foo() {
   int a, b, c;
   a = b -= c;
   a = b + c;
}
