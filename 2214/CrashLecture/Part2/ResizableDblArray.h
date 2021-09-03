#pragma once
#ifndef  SDDS_RESIZABLEDBLARRAY_H
#define SDDS_RESIZABLEDBLARRAY_H
#include "DblArray.h"
namespace sdds {
   class ResizableDblArray: public DblArray {
   public:
      void resize(int newsize);
      ResizableDblArray(const ResizableDblArray& cp);
      ResizableDblArray& operator=(const ResizableDblArray& RD);
      ResizableDblArray(int size = 1);
      double& element(int indexOfelement);
   //   double& operator[](int indexOfElement);
   };
}


#endif // ! sdds_RESIZABLEDBLARRAY_H



