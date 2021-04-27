#pragma once
#ifndef SDDS_INTARRAY_H__
#define SDDS_INTARRAY_H__
namespace sdds {
   class IntArray {
      int* m_array;
      int m_size;
   public:
      int size()const;
      IntArray(int size);
      operator const int* ()const;
      ~IntArray();
      int& operator[](int index);
      int& operator[](int index)const;
   };
}
#endif // !SDDS_INTARRAY_H__

