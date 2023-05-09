#pragma once
#ifndef SDDS_DYNARRAY_H
#define SDDS_DYNARRAY_H
namespace sdds {
   /*
   * Add the typename of the template to the name of the class except for:
   * 1- The name of the class right after the template statement
   * 2- Names of the constructors
   * 3- The destructor
   */


   template <typename type>
   class DynArray {
      type* m_data{};
      size_t m_size{};
   public:
      DynArray(size_t size = 1);
      DynArray(const DynArray<type>& I);
      DynArray<type>& operator=(const DynArray<type>& I);
      virtual ~DynArray();
      DynArray<type>& operator=(const type arr[]);
      DynArray<type>& set(const type arr[], size_t arraySize);
      size_t size()const;
      operator bool()const;

      DynArray<type>& resize(size_t newSize);

      type& operator[](size_t index);

      const type& operator[](size_t index)const;

   };


   template <typename type>
   DynArray<type>::DynArray(size_t size) :m_size(size) {
      if(m_size == 0) m_size = 1;
      m_data = new type[m_size];  // default constructor
   }
   template <typename type>
   DynArray<type>::DynArray(const DynArray<type>& I) :m_size(I.m_size) {
      m_data = new type[I.m_size];
      for(size_t i = 0; m_data && I.m_data && i < I.m_size; i++) {
         m_data[i] = I.m_data[i]; // copy assignment
      }
   }

   template <typename type>
   DynArray<type>& DynArray<type>::operator=(const DynArray<type>& I) {
      if(I && this != &I) { // if I is valid and it is not a self copy
         delete[] m_data;
         m_data = new type[I.m_size];
         for(size_t i = 0; i < I.m_size; i++) {
            m_data[i] = I.m_data[i];
         }
         m_size = I.m_size;
      }
      return *this;
   }


   template <typename type>
   DynArray<type>::~DynArray() {
      delete[] m_data;
   }

   template <typename type>
   DynArray<type>& DynArray<type>::operator=(const type arr[]) {
      for(size_t i = 0; i < m_size; i++) {
         m_data[i] = arr[i];
      }
      return *this;
   }

   template <typename type>
   DynArray<type>& DynArray<type>::set(const type arr[], size_t arraySize) {
      resize(arraySize);
      return *this = arr;
   }


   template <typename type>
   size_t DynArray<type>::size() const {
      return m_size;
   }

   template <typename type>
   DynArray<type>::operator bool() const {
      return m_data != nullptr;
   }


   template <typename type>
   DynArray<type>& DynArray<type>::resize(size_t newSize) {
      if(newSize != size()) {
         if(newSize == 0) newSize = 1;
         type* temp = new type[newSize];
         for(size_t i = 0; temp && m_data && i < newSize && i < m_size; i++) {
            temp[i] = m_data[i];
         }
         delete[] m_data;
         m_data = temp;
         m_size = newSize;
      }
      return *this;
   }

   template <typename type>
   type& DynArray<type>::operator[](size_t index) {
      if(index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }

   template < typename type>
   const type& DynArray<type>::operator[](size_t index) const {
      return m_data[index % m_size];
   }



}

#endif // !SDDS_DYNARRAY_H

