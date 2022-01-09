#ifndef SDDS_DYNMARKS_H
#define SDDS_DYNMARKS_H


namespace sdds {
   class DynMarks {  // classes are always private by default
   //private:  // private member valriables
      char* m_title;
      double* m_values;
      int m_NoOfValues;
   public:
      // Getters or Accessors or Queries
      void display()const;
      bool inSafeEmpty()const;
      // Setters, Modifiers, Mutators
      bool add(double mark);
      void set(const char* title);

      // these two functions can only be called only 
      // once  and right after the objects are created
      void init();
      void init(const char* title, const double values[], int NoOfValues);
      
      // This function should only be called 
      // at the end of the lifetime of the object 
      // when it is about to go out of scope.
      void deallocateMem();
   };

}
#endif // !SDDS_DYNMARKS_H


