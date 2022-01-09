#ifndef SDDS_DYNARRAY_H
#define SDDS_DYNARRAY_H
/*
* To Convert a regular class to a class template
1 - add the template tag to all blocks
    involved with class
2 - change the focused type to the type template
3-  add the signature of the template (<place holder>)
    to all the class names except:
    A- The name of the class after the template
    B- Constructor names
    C- Destructor name
*/

namespace sdds {

   template <typename type>
   class DynArray {
      type* m_data{};  // therefore for all constructors the m_data attribute will be nullptr
      unsigned int m_size = -1;
   public:
      DynArray(const DynArray<type>&);
      DynArray<type>& operator=(const DynArray<type>&);
      DynArray(unsigned int size = 1u);
      type& operator[](unsigned int index);
      unsigned int size()const;
      void resize(unsigned int newsize);
      operator int()const;
      operator unsigned int()const;
      virtual ~DynArray();
   };

   template <typename type>
   DynArray<type>::DynArray(unsigned int size) :m_size(size) {
      m_data = new type[size];
   }

   template <typename type>
   type& DynArray<type>::operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }

   template <typename type>
   DynArray<type>::DynArray(const DynArray<type>& A) {
      operator=(A);
   }

   template <typename type>
   DynArray<type>& DynArray<type>::operator=(const DynArray<type>& A) {
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

   template <typename type>
   DynArray<type>::~DynArray() {
      delete[] m_data;
   }

   template <typename type>
   unsigned int DynArray<type>::size()const {
      return m_size;
   }

   template <typename type>
   void DynArray<type>::resize(unsigned int newsize) {
      type* temp = new type[newsize];
      // copy all the current data into new memory
      for (unsigned int i = 0; i < newsize && i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = temp;
   }

   template <typename type>
   DynArray<type>::operator int() const {
      return int(m_size);
   }

   template <typename type>
   DynArray<type>::operator unsigned int() const {
      return m_size;
   }

   template<typename type>
   inline DynArray<type>::operator const type* () const {
   }

}
#endif // !SDDS_ARRAY_H
