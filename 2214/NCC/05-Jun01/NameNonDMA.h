#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   class Name {
   private: // redundant since class is private by default but good to have as a comment
      char m_first[21];
      char m_last[41];
   public:
      void set(const char* firstName, const char* lastName);
      void print();
   };
}

#endif // !SDDS_NAME_H
