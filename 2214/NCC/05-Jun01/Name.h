#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   class Name {
   private: // redundant since class is private by default but good to have as a comment
      char* m_first;
      char* m_last;
   public:
      void init();// must only be called once when the 
                  // class is created.
      void set(const char* firstName, const char* lastName);
      void print();
      void deleteMem();
   };
}

#endif // !SDDS_NAME_H
