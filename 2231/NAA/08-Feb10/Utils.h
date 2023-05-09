#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
namespace sdds {
   class Utils {
   public:
      // cstring functions
      size_t strlen(const char* cstr)const;
      char* strcpy(char* des, const char* src)const;
      char* strcat(char* des, const char* src)const;

      // end cstring fucntins

      int getInt();
      int getInt(int min, int max, const char* prompt = nullptr);
   };
   extern Utils U; // this prototype
                   // extern make a filescope variable global
}
#endif // !SDDS_UTILS_H


