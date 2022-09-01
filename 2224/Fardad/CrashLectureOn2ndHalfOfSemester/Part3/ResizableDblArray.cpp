#include "ResizableDblArray.h"
namespace sdds {
   void ResizableDblArray::resize(int newsize) {
      if (newsize != size()) {
         DblArray temp(*this);
         allocate(newsize);
         for (int i = 0; i < temp.size() && i < newsize; i++) {
            DblArray::element(i) = temp[i];
         }
      }
   }
   ResizableDblArray::ResizableDblArray(const ResizableDblArray& cp):DblArray(cp) {}
   ResizableDblArray& ResizableDblArray::operator=(const ResizableDblArray& RD) {
      DblArray::operator=(RD);
      return *this;
   }
   ResizableDblArray::ResizableDblArray(int size):DblArray(size) {}

   double& ResizableDblArray::element(int indexOfelement) {
      if (indexOfelement >= size()) {
         resize(indexOfelement + 1);
      }
      return DblArray::element(indexOfelement);
   }
 /*  double& ResizableDblArray::operator[](int indexOfElement) {
      return element(indexOfElement);
   }*/
}
