#ifndef SICT_SAFEARRAY_H__
#define SICT_SAFEARRAY_H__

template <typename T>
class SafeArray {
  T* m_data;
  unsigned int m_size;
  void copy(const SafeArray<T>& A) {
    m_data = new T[A.size()];
    m_size = A.m_size;
    for (int i = 0; i < m_size; i++) {
      m_data[i] = A.m_data[i];
    }
  }
public:
  SafeArray(unsigned int size = 0U);
  SafeArray(const SafeArray<T>& A) {
    copy(A);
  }

  virtual ~SafeArray() {
    delete[] m_data;
  }
  unsigned int size()const {
    return m_size;
  }
  void size(unsigned int newsize) {
    unsigned int i;
    if (newsize == 0) newsize = 1;
    T* temp = new T[newsize];
    for (i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_data[i];
    }
    delete[] m_data;
    m_data = temp;
    m_size = newsize;
  }
  T& operator[](unsigned int index) {
    if (index >= m_size) size(index + 1);
    return m_data[index];
  }
  T* operator T*() {
    return m_data;
  }
  SafeArray<T>& operator=(const SafeArray<T>& A);
};

template <typename Tp>
SafeArray<Tp>& SafeArray<Tp>::operator=(const SafeArray<Tp>& A) {
  if (this != &A) {
    delete[] m_data;
    copy(A);
  }
  return *this;
}

template <typename T>
SafeArray<T>::SafeArray(unsigned int size) :m_size(size) {
  if (m_size == 0) m_size = 1;
  m_data = new T[m_size];
}

#endif