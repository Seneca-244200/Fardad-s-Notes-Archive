#ifndef SDDS_INTARRAY
#define SDDS_INTARRAY
namespace sdds {
   class IntArray {
      int* m_data;
      int m_size;
      void resize(int newsize);
   public:
      IntArray(int size);
      IntArray(const IntArray& cp);
      IntArray& operator=(const IntArray& cp);
      int size()const;
      int& operator[](int index);
      const int& operator[](int index)const;
      ~IntArray();
      std::ostream& display(std::ostream& ostr = std::cout)const;

   };
   std::ostream& operator<<(std::ostream& ostr, const IntArray& Ro);

}

#endif // !SDDS_INTARRAY


