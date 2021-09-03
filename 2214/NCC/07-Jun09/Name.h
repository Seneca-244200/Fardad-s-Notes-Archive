#ifndef SDDS_NAME_H
#define SDDS_NAME_H


namespace sdds {

   class Name {
   private: // redundant since class is private by default but good to have as a comment
      char* m_first;
      char* m_last;
      void init();// must only be called once when the 
                  // class is created.
      void deleteMem();// Have to make sure
       // deleteMem is called before Name 
       // goes out of scope not to have mem
       // leak
   public:
      Name();// is called right after creation of the object
      Name(const char* firstAndLast);
      Name(const char* firstName,
                    const char* lastName);
      ~Name();//is called right before the object dies
      void set(const char* firstName, const char* lastName);
      void print()const;
       bool isEmpty()const;  // returns if Name
      // is in a safe empty state.
   };
   extern bool debug;
}

#endif // !SDDS_NAME_H
