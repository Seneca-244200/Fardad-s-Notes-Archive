#ifndef SDDS_ARRAY_H
#define SDDS_ARRAY_H
namespace sdds {
   /*
When converting a class to a template,
The name of the class must carry the type of the template (signature of the template):
With 3 exceptions:
1- The name of the class the comes right after the template statement
2- The names of consturctors
3- the name of the destructor
*/

   template <typename type>
   class Array {
      type* m_array{};
      unsigned int m_size{};
   public:
      // construction
      Array(unsigned size = 10);

      //Query
      unsigned int size()const;

      // subscription overloads (modifier and query)
      type& operator[](unsigned int index);
      const type& operator[](unsigned int index)const;

      // modifier
      void resize(unsigned int newsize);

      // Rule of three
      Array(const Array<type>& d);
      Array<type>& operator=(const Array<type>& d);
      virtual ~Array();
   };


   template <typename type>
   Array<type>::Array(unsigned size) {
      if (size == 0) size = 10;
      m_array = new type[m_size = size];
   }

   template <typename type>
   unsigned int Array<type>::size() const {
      return m_size;
   }

   template <typename type>
   type& Array<type>::operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_array[index];
   }

   template <typename type>
   const type& Array<type>::operator[](unsigned int index) const {
      return m_array[index % m_size];
   }

   template <typename type>
   void Array<type>::resize(unsigned int newsize) {
      if (newsize == 0) newsize = 1;
      type* temp = new type[newsize];
      for (unsigned i = 0; i < m_size && i < newsize; temp[i] = m_array[i++]);
      delete[] m_array;
      m_size = newsize;
      m_array = temp;
   }

   template <typename type>
   Array<type>::Array(const Array<type>& d) {
      operator=(d);
   }

   template <typename type>
   Array<type>& Array<type>::operator=(const Array<type>& d) {
      if (this != &d) {
         delete[] m_array;
         m_array = new type[m_size = d.m_size];
         for (unsigned i = 0; i < m_size; m_array[i] = d.m_array[i++]);
      }
      return *this;
   }

   template <typename type>
   Array<type>::~Array() {
      delete[] m_array;
   }




}

#endif // !SDDS_ARRAY_H
