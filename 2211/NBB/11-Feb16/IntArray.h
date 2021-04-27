#pragma once
#ifndef SDDS_INTARRAY_H__
#define SDDS_INTARRAY_H__
namespace sdds {
   class IntArray {
      int* m_array;
      int m_size;
   public:
      operator const int* ();
      int size()const;
      int& operator[](int index);
      int& operator[](int index)const;
      IntArray(int size);
      ~IntArray();
   };


}
#endif // !SDDS_INTARRAY_H__


