#include <iostream>
using namespace std;
template <typename type>
class Container {
   type *valAdd_;
public:
   Container() {
      valAdd_ = new type;
   }
   Container(type value) {
      valAdd_ = new type(value);
   }
   Container(const Container<type>& D) {
      valAdd_ = new double(*D.valAdd_);
   }
   Container<type>& operator=(const Container<type>& D) {
      if (this != &D) {
         *valAdd_ = *D.valAdd_;
      }
      return *this;
   }
   ~Container() {
      delete valAdd_;
   }
   ostream& display(ostream& os)const {
      return os << (*valAdd_);
   }
   istream& read(istream& is) {
      return is >> (*valAdd_);
   }
   type& operator=(const type& Ref) {
      *valAdd_ = Ref;
      return *valAdd_;
   }
};
template <typename type>
ostream& operator<<(ostream& os, const Container<type>& Dbl) {
   return Dbl.display(os);
}
template <typename type>
istream& operator >> (istream& is, Container<type>& Dbl) {
   return Dbl.read(is);
}

