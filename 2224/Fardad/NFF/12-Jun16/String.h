#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
namespace sdds {
   const int ReadBufSize = 8;
   class String {
      char* m_data{};
      int m_length{};
      char m_delimiter{ '\n' };
      int strlen(const char* str)const;
      char* strcpy(char* des, const char* src)const;
      void AlCpy(const char* cstr);
      char* strcat(char* des, const char* src)const;
      String& resize(int newsize);
      const char* strstr(const char* str, const char* find)const;
      int strcmp(const char* s1, const char* s2, int len)const;

   public:
      int strcmp(const char* s1, const char* s2)const;
      String();
      String(const char* cstr);
      //Queries:
      operator const char* ()const;
      operator int()const;
      operator unsigned int()const;
      operator bool()const;
      const char& operator[](int index)const;
      const char* contains(const String& cmp);
      const char* contains(const char* cstr);


      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);

      // comparing
      bool operator>(const String& ro)const;
      bool operator<(const String& ro)const;
      bool operator>=(const String& ro)const;
      bool operator<=(const String& ro)const;
      bool operator==(const String& ro)const;
      bool operator!=(const String& ro)const;

      bool operator>(const char* cstr)const;
      bool operator<(const char* cstro)const;
      bool operator>=(const char* cstr)const;
      bool operator<=(const char* cstr)const;
      bool operator==(const char* cstr)const;
      bool operator!=(const char* cstr)const;



      // modifier
      void operator~();
      char& operator[](int index);
      String& delimiter(char delim);
      String& operator=(const char* cstr);
      String& operator++(int);// adding a space after
      String& operator++();// add a space before data
      String& operator+=(const String& ro);
      String operator +(const char* cstr)const;
      String operator +(const String& ro)const;

      // the rule of three 
     // (copy constructor, 
     //  copy assignment , 
     //  destructor f
     //  or any object with resources outside of their scope)

      // Rule of three
      //
      //1:
      String(const String& toCopy);
      //2:
      String& operator=(const String& toAssing);
      //3: create a destructor
      ~String();


      friend bool operator<(const char* cstr, const String& ro); // very very bad thing to do

   };
   std::ostream& operator<<(std::ostream& ostr, const String& ro);
   std::istream& operator>>(std::istream& istr,String& ro);
   String operator+(const char* cstr, const String& ro);

   bool operator<(const char* cstr, const String& ro);
   bool operator>(const char* cstr, const String& ro);
   bool operator<=(const char* cstr, const String& ro);
   bool operator>=(const char* cstr, const String& ro);
   bool operator==(const char* cstr, const String& ro);
   bool operator!=(const char* cstr, const String& ro);

}
#endif // !SDDS_STRING_H



