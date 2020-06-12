#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__

namespace sdds {
   class String {
      char* m_data;
      int m_size;
      void setEmpty();
   public:
      String();
      String(const char* str);
      ~String();
      bool operator>(const String& S)const;
      void set(const char* str);
      String& operator+=(const String& Ro);
      String& operator=(const char* str);
      String& operator=(const String& S);
      void print()const;
      void clearMemory();
      int size()const;
      bool isEmpty()const;
   };
}


#endif // !SDDS_STRING_H__