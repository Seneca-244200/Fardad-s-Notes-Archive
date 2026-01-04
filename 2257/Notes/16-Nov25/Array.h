#ifndef SENECA_Array_H
#define SENECA_Array_H
namespace seneca {
   /*
   1 - replace all the focus type of the class to the typename
   2 - add the typename tag to all class names except:
       I- the name of the class right after template statement
       II- the names of the constructors
       III- the name of the destructor
   
   */
   template <typename type>
   class Array {
      type* m_data{};
      size_t m_size{};
   protected:
      Array<type>& resize(size_t newsize);
   public:
      Array(size_t size);
      Array(const Array<type>&) = delete;
      Array<type>& operator=(const Array<type>&) = delete;
      virtual ~Array();
      size_t size()const;
      type& operator[](size_t index);
      const type& operator[](size_t index)const;
   };

   template <typename type>
   Array<type>& Array<type>::resize(size_t newsize) {
      type* temp = new type[newsize = newsize ? newsize : 1] {};
      size_t i = 0;
      for (i = 0; i < m_size && i < newsize; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = temp;
      return *this;
   }

   template <typename type>
   Array<type>::Array(size_t size) {
      if (size == 0) size = 1;
      m_data = new type[m_size = size] {};
   }
   template <typename type>
   Array<type>::~Array() {
      delete[] m_data;
   }

   template <typename type>
   size_t Array<type>::size() const {
      return m_size;
   }
   template <typename type>
   type& Array<type>::operator[](size_t index) {
      if (index >= m_size) resize(index + 1);
      return m_data[index];
   }
   template <typename type>
   const type& Array<type>::operator[](size_t index) const {
      return m_data[index % m_size];
   }

}
#endif // !SENECA_Array_H

