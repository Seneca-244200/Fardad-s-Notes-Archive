#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
namespace sdds {
   class Student {
//   private:
      char* m_name; // Dynamic Name
      unsigned int m_stno;
      void init();
      void deallocate();
   public:
      Student(); // constructor
      ~Student(); // destructor
      void set();  // receives the information from console
      void set(const char name[], 
         unsigned int stno);
      void display()const;
   };
}
#endif // !SDDS_STUDENT_H


