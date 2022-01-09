#ifndef SDDS_DYNMARKS_H
#define SDDS_DYNMARKS_H
namespace sdds {
   class DynMarks {
   private:
      char* m_title;
      double* m_values;
      int m_noOfValues;
      void setSafeEmpty();
   public:
      void display()const;
      bool inSafeEmpty()const;
      // constructors will be called
      // right after the momnet of creation
      DynMarks(const char* title);
      DynMarks(const char* title,
            const double values[],
                  int noOfMarks);
      DynMarks();

      DynMarks& set(const char* title);
      DynMarks&  add(double mark);
      // the destructor will be called
      // right before the object dies 
      // (or goes out of scope);
      ~DynMarks();
   };

}

#endif // !SDDS_MARKS_H