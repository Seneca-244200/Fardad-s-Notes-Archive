#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   class Name {
   private:  // redundant, since class is private by default
      char* m_first;
      char* m_last;
   public:
      void init();
      // modifier, setters
      void set(const char* firstName,
                  const char* lsatName);
      // queries, getters
      void print();
      void deleteMem();
   };

}

#endif // !SDDS_NAME_H
