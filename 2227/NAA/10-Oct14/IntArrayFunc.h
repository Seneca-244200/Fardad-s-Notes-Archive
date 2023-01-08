#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data = nullptr;// in all cases m_data will be null when the IntArray is instantiated
      unsigned int m_size;
   public:
      IntArray(unsigned int size = 1);
      IntArray(const IntArray& I);
      IntArray& operator=(const IntArray& I);
      ~IntArray();
      unsigned size()const;
      operator bool()const;
      int& element(unsigned int index);
      const int& element(unsigned int index)const;

   };
}
#endif // !SDDS_INTARRAY_H


