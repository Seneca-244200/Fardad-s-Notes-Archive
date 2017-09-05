#include <iostream>
using namespace std;
template <typname T>
class DblContainer {
   T *valAdd_;
public:
   DblContainer() {
      valAdd_ = new T;  // T must have no arg constructor
   }
   DblContainer(T value) {
      valAdd_ = new T(value);  // T must have copy constructor
   }
   DblContainer(const DblContainer<T>& D) {
      valAdd_ = new T(*D.valAdd_); // T must have copy constructor
   }
   DblContainer<T> &operator=(const DblContainer<T>& D) {
      if (this != &D) {
         *valAdd_ = *D.valAdd_;  // T must have operator=(T)
      }
      return *this;
   }
   ~DblContainer() {
      delete valAdd_;
   }
   ostream& display(ostream& os)const {
      return os << (*valAdd_);        // T must be printable with cout
   }
   istream& read(istream& is) {
      return is >> (*valAdd_);      // T must be readable with cin
   }
   T& operator=(const T& Ref) {
      *valAdd_ = Ref;   // T must have operator=(T)
      return *valAdd_;
   }
};
template <typname T>
ostream& operator<<(ostream& os, const DblContainer<T>& Dbl) {
   return Dbl.display(os);
}
template <typname T>
istream& operator >> (istream& is, DblContainer<T>& Dbl) {
   return Dbl.read(is);
}

