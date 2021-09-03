#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   class Name {
   private:  // redundant, since class is private by default
      char m_first[21];
      char m_last[41];
   public:
      // modifier, setters
      void set(const char* firstName,
                  const char* lsatName);
      // queries, getters
      void print();
   };

}

#endif // !SDDS_NAME_H
