#ifndef SDDS_DYNMARKS_H
#define SDDS_DYNMARKS_H


namespace sdds {
   class DynMarks {  // classes are always private by default
   //private:  // private member valriables
      char* m_title;
      double* m_values;
      int m_NoOfValues;
      void setEmpty();
   public:
      // Getters or Accessors or Queries
      void display()const;
      bool inSafeEmpty()const;
      // Setters, Modifiers, Mutators
      DynMarks& add(double mark);
      void set(const char* title);


      DynMarks();
      DynMarks(const char* title);
      DynMarks(const char* title, const double values[], int NoOfValues);
      
      // This function should only be called 
      // at the end of the lifetime of the object 
      // when it is about to go out of scope.
      ~DynMarks();
   };

}
#endif // !SDDS_DYNMARKS_H


