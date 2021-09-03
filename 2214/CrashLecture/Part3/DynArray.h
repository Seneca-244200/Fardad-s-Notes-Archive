#pragma once
#ifndef  SDDS_DYNARRAY_H
#define SDDS_DYNARRAY_H
#include "Array.h"
namespace sdds {
   template <typename type>
   class DynArray: public Array<type> {
   public:
      void resize(int newsize);
      DynArray(const DynArray<type>& cp);
      DynArray<type>& operator=(const DynArray<type>& RD);
      DynArray(int size = 1);
      type& element(int indexOfelement);
   };

   template <typename type>
   void DynArray<type>::resize(int newsize) {
      if (newsize != Array<type>::size()) {
         Array<type> temp(*this);
         Array<type>::allocate(newsize);
         for (int i = 0; i < temp.size() && i < newsize; i++) {
            Array<type>::element(i) = temp[i];
         }
      }
   }

   template <typename type>
   DynArray<type>::DynArray(const DynArray<type>& cp) :Array<type>(cp) {
   }

   template <typename type>
   DynArray<type>& DynArray<type>::operator=(const DynArray<type>& RD) {
      Array<type>::operator=(RD);
      return *this;
   }

   template <typename type>
   DynArray<type>::DynArray(int size) :Array<type>(size) {
   }

   template <typename type>
   type& DynArray<type>::element(int indexOfelement) {
      if (indexOfelement >= Array<type>::size()) {
         resize(indexOfelement + 1);
      }
      return Array<type>::element(indexOfelement);
   }
}


#endif // ! sdds_RESIZABLEDBLARRAY_H



