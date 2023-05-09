
#ifndef SDDS_UTILS_H
namespace sdds {
   class Utils {
   public:
      // cstring tools
      size_t strlen(const char* str)const;
      char* strcpy(char* des, const char* src)const;
      char* strcat(char* des, const char* src)const;
      int strcmp(const char* s1, const char* s2)const;
      char* aloCopy(size_t& length, const char* src)const;
      // end cstring tools
      int getInt();
      int getInt( int min, int max, const char* prompt = nullptr);
   };
   extern Utils U;// prototype for U in Utils.cpp
}
#endif // !SDDS_UTILS_H


