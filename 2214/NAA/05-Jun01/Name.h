#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   class Name {  // exactly like a sturct, but everything is private by default
   //private:  // optional since class is private by default
 /*     char m_first[21];
      char m_last[41];*/
      char* m_first;
      char* m_last;
   public:
      void init();
      void set(const char* firstname, const char* lastname);
      void print();
      void deleteMem();
   };

}

#endif // !SDDS_NAME_H
