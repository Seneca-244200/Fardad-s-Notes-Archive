#ifndef SDDS_DYNMARKS_H
#define SDDS_DYNMARKS_H
namespace sdds {
   class DynMarks {
      char* m_title;   // "EAC150 Finals"
      double* m_values;
      int m_noOfValues;
   public:
      void display()const;
      bool inSafeEmpty()const;
      void init();
      void init(const char* title, 
              const double values[], 
              int NoOfValues);
      void set(const char* title);
      bool add(double mark);
      void cleanUp();
   };
}
#endif // !SDDS_MARKS_H
