#ifndef SDDS_DYNMARKS_H
#define SDDS_DYNMARKS_H
namespace sdds {
   class DynMarks {
      char* m_title;   // "EAC150 Finals"
      double* m_values;
      int m_noOfValues;
      void setSafeEmpty();
   public:
      DynMarks();
      DynMarks(const char* title);
      DynMarks(const char* title,
         const double values[],
         int NoOfValues);

      void display()const;
      bool inSafeEmpty()const;
      DynMarks& set(const char* title);
      DynMarks& add(double mark);
      ~DynMarks();
   };
}
#endif // !SDDS_MARKS_H
