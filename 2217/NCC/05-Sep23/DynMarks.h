#ifndef SDDS_DYNMARKS_H
#define SDDS_DYNMARKS_H
namespace sdds {
   class DynMarks {
   private:
      char* m_title;
      double* m_values;
      int m_noOfValues;
   public:
      void display()const;
      bool inSafeEmpty()const;
      // the init funcs must be called
      // only once right after the
      // object is created. 
      void init(const char* title, 
                const double values[], 
                  int noOfMarks);
      void init();
      void set(const char* title);
      bool add(double mark);
      // cleanUp should be called only
      // once right before the object
      // is about to die
      void cleanUp();
   };

}

#endif // !SDDS_MARKS_H