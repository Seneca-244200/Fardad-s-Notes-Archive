
#ifndef SDDS_UTILS_H
namespace sdds {
   class Utils {
   public:
      int getInt();
      int getInt( int min, int max, const char* prompt = nullptr);
   };
   extern Utils U;// prototype for U in Utils.cpp
}
#endif // !SDDS_UTILS_H


