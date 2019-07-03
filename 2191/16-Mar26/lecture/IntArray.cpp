#include "IntArray.h"

namespace ict{

  IntArray::IntArray(unsigned int size):m_size(size){
    if (m_size == 0) m_size = 1;
    m_data = new int[m_size];
  }
  unsigned int IntArray::size()const{
    return m_size;
  }

  void IntArray::resize(unsigned int newsize){
    int i;
    if (newsize == 0) newsize = 1;
    int* temp = new int[newsize];
    for (i = 0; i<m_size && i < newsize; i++){
      temp[i] = m_data[i];
    }
    delete[] m_data;
    m_data = temp;
    m_size = newsize;
  }
  int& IntArray::at(unsigned int index){
    if (index >= m_size) resize(index + 1);
    return m_data[index ];
  }
  int& IntArray::operator[](unsigned int index){
    return at(index);
  }

  IntArray::~IntArray(){
    delete[] m_data;
  }
   
}

