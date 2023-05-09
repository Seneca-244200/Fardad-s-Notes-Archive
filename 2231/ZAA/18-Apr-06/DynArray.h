#ifndef SDDS_DYNARRAY_H
#define SDDS_DYNARRAY_H
namespace sdds {
   /*
   type must be added to all class names except
   Constructor names
   Destructor name
   The class name right after the template statement
   */
   template <typename T>
   class DynArray {
      T* m_data = nullptr;// in all cases m_data will be null when the DynArray is instantiated
      unsigned int m_size;
   public:
      DynArray(unsigned int size = 1);
      DynArray(const DynArray<T>& I);
      DynArray<T>& operator=(const DynArray<T>& I);
      DynArray<T>& operator=(const T array[]);
      DynArray<T>& set(const T array[], unsigned arraySize);
      ~DynArray();
      void resize(unsigned newsize);
      unsigned size()const;
      operator bool()const;
      T& operator[](unsigned int index);
      const T& operator[](unsigned int index)const;
   };

   template <typename T>
   DynArray<T>::DynArray(unsigned int size) :m_size(size) {
      if(m_size == 0) m_size = 1;
      m_data = new T[m_size]; // default constructor
   }

   template <typename T>
   DynArray<T>::DynArray(const DynArray<T>& I) :m_size(I.m_size) {
      m_data = new T[I.m_size];
      for(unsigned i = 0; m_data && I.m_data && i < I.m_size; i++) {
         m_data[i] = I.m_data[i]; // type must have rule of three
      }
   }

   template <typename T>
   DynArray<T>& DynArray<T>::operator=(const DynArray<T>& I) {
      if(I && this != &I) { // if I is valid and it is not a self copy
         delete[] m_data;
         m_data = new T[I.m_size];
         for(unsigned i = 0; i < I.m_size; i++) {
            m_data[i] = I.m_data[i];
         }
         m_size = I.m_size;
      }
      return *this;
   }
   template <typename T>
   DynArray<T>& DynArray<T>::operator=(const T array[]) {
      for(unsigned i = 0; i < m_size; i++) {
         m_data[i] = array[i];
      }
      return *this;
   }
   template <typename T>
   DynArray<T>& DynArray<T>::set(const T array[], unsigned arraySize) {
      resize(arraySize);
      return *this = array;
   }
   template <typename T>
   DynArray<T>::~DynArray() {
      delete[] m_data;
   }
   template <typename T>
   void DynArray<T>::resize(unsigned newsize) {
      if(newsize == 0) newsize = 1;
      T* temp = new T[newsize];
      for(unsigned i = 0; temp && m_data && i < newsize && i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_data = temp;
      m_size = newsize;
   }
   template <typename T>
   unsigned DynArray<T>::size() const {
      return m_size;
   }
   template <typename T>
   DynArray<T>::operator bool() const {
      return m_data != nullptr;
   }
   template <typename T>
   T& DynArray<T>::operator[](unsigned int index) {
      if(index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }
   template <typename T>
   const T& DynArray<T>::operator[](unsigned int index)const {
      return m_data[index % m_size];
   }
}


#endif