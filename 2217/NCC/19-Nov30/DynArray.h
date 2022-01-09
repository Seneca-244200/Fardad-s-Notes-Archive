#ifndef SDDS_DYNARRAY_H
#define SDDS_DYNARRAY_H
namespace sdds {

/***********************************************************************
// Dynamic Array
// File	DynArray
// Version 1.0
// Date	2021/11/25
// Author	Fardad Soleimanloo
// Description
// same as the one in nov 25th, but the size is passed through the
// type of the template  (bad design)
//
// -----------------------------------------------------------
// Name            Date            Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/

   template <typename type, int size>
   class DynArray {
      type* m_data{};  // therefore for all constructors the m_data attribute will be nullptr
      unsigned int m_size{};
   public:
      DynArray(const DynArray<type,size>&);
      DynArray<type,size>& operator=(const DynArray<type,size>);
      DynArray();
      type& operator[](unsigned int index);
      unsigned int size()const;
      void resize(unsigned int newsize);
      virtual ~DynArray();
   };


   template <typename type, int size>
   DynArray<type,size>::DynArray() :m_size(size) {
      m_data = new type[size];
   }


   template <typename type, int size>
   type& DynArray<type,size>::operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }
   
   template <typename type, int size>
   DynArray<type,size>::DynArray(const DynArray<type,size>& A) {
      operator=(A);
   }



   template <typename type, int size>
   DynArray<type,size>& DynArray<type,size>::operator=(const DynArray<type,size> A) {
      if (this != &A) {
         delete[] m_data;
         m_data = new type[A.m_size];
         m_size = A.m_size;
         for (unsigned int i = 0; i < m_size; i++) {
            m_data[i] = A.m_data[i];
         }
      }
      return *this;
   }

   template <typename type, int size>
   DynArray<type,size>::~DynArray() {
      delete[] m_data;
   }
   
   template <typename type, int size>
   unsigned int DynArray<type,size>::size()const {
      return m_size;
   }

   template <typename type, int size>
   void DynArray<type,size>::resize(unsigned int newsize) {
      type* temp = new type[newsize];
      // copy all the current data into new memory
      for (unsigned int i = 0; i < newsize && i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = temp;
   }

}
#endif