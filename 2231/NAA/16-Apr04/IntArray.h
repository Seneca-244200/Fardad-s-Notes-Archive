#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data{};
      size_t m_size{};
   public:
      IntArray(size_t size = 1);
      IntArray(const IntArray& I);
      IntArray& operator=(const IntArray& I);
      virtual ~IntArray();
      IntArray& operator=(const int array[]);
      IntArray& set(const int array[], size_t arraySize);
      size_t size()const;
      operator bool()const;

      IntArray& resize(size_t newSize);

      int& operator[](size_t index);

      const int& operator[](size_t index)const;

   };
}
#endif

