#pragma once
#ifndef SDDS_ARRAY_H_
#define SDDS_ARRAY_H_
namespace sdds {
   /*
   All class names must carry typename signature except:
       class name after template
       constructor's name
       desttrucor name
   */

   template <typename type>
   class Array {
      type* m_data{}; // init type* m_data = nullptr;
      int m_size;
   protected:
      void allocate(int size);
   public:
      Array(int size = 1);
      Array(const Array<type>& cp);
      Array<type>& operator=(const Array<type>& cpAsgn);
      virtual type& element(int indexOfelement);
      virtual type& operator[](int indexOfElement);
      virtual ~Array();
      int size()const;
   };

   /*
All class names must carry typename signature except:
    class name after template
    constructor's name
    desttrucor name
*/
   template <typename type>
   void Array<type>::allocate(int size) {
      delete[] m_data;
      if (size < 1) size = 1;
      m_data = new type[size];  // default constructor
      m_size = size;
   }

   template <typename type>
   Array<type>::Array(int size) {
      allocate(size);
   }

   template <typename type>
   Array<type>::~Array() {
      delete[] m_data;
   }

   template <typename type>
   Array<type>::Array(const Array<type>& cp) {
      operator=(cp);
   }

   template <typename type>
   Array<type>& Array<type>::operator=(const Array<type>& cp) {
      if (this != &cp) {
         delete[] m_data;
         m_data = new type[cp.m_size];
         for (int i = 0; i < cp.m_size; i++) {
            m_data[i] = cp.m_data[i];  // copy assignment
         }
         m_size = cp.m_size;
      }
      return *this;
   }

   template <typename type>
   type& Array<type>::element(int indexOfelement) {
      if (indexOfelement < 0) indexOfelement = 0;
      return m_data[indexOfelement % m_size];
   }

   template <typename type>
   type& Array<type>::operator[](int indexOfElement) {
      return element(indexOfElement);
   }

   template <typename type>
   int Array<type>::size() const {
      return m_size;
   }


}


#endif // !SDDS_ARRAY_H_


