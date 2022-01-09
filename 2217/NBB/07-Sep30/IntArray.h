#ifndef SDDS_INTARRAY
#define SDDS_INTARRAY
namespace sdds {
   class IntArray {
      int* m_data;
      int m_size;
      void resize(int newsize);
   public:
      IntArray(int size);
      int& operator[](int index);
      int size()const;
      ~IntArray();
   };
}

#endif // !SDDS_INTARRAY


