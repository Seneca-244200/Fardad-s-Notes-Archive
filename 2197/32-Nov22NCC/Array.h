template <typename type>
class Array {
   type* m_data;
   unsigned int m_size;
public:
   Array(unsigned int size = 0);
   Array(const Array<type>& CP) = delete;
   Array<type>& operator=(const Array<type>& RO) = delete;
   unsigned int size()const;
   void resize(unsigned int newsize);
   type& at(unsigned int index);
   type& operator[](unsigned int index);
   ~Array();
};

template <typename type>
Array<type>::Array(unsigned int size) :m_size(size) {
   if (m_size == 0) m_size = 1;
   m_data = new type[m_size];
}

template <typename type>
unsigned int Array<type>::size()const {
   return m_size;
}


template <typename type>
void Array<type>::resize(unsigned int newsize) {
   int i;
   if (newsize == 0) newsize = 1;
   type* temp = new type[newsize];
   for (i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_data = temp;
   m_size = newsize;
}


template <typename type>
type& Array<type>::at(unsigned int index) {
   if (index >= m_size) resize(index + 1);
   return m_data[index];
}

template <typename type>
type& Array<type>::operator[](unsigned int index) {
   return at(index);
}

template <typename type>
Array<type>::~Array() {
   delete[] m_data;
}
