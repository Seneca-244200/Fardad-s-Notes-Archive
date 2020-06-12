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
      String(const String& S);
      ~String();
      bool operator>(const String& S)const;
      void set(const char* str);
      String& operator+=(const String& Ro);
      String& operator=(const char* str);
      String& operator=(const String& S);
      void print()const;
      void freeMemory();
      int size()const;
      bool isEmpty()const; 
      friend void addTo(String& des, const String& src);
   };
   void addTo(String& des, const String& src);
   String concat(const String& S1, const String& S2);
}
ostream& operator<<(std::ostream& os, const String& S);

#endif // !SDDS_STRING_H__