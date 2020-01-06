#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
namespace sdds {
   // reads an integer from console the integer referenced by "val"
   // argument.
   // if the user enters an invalid integer or values outside of the 
   // boundries set by "min" or "max" , this function flushes the 
   //keyboard, prints the "errorMessage and reads again
   // untill user enters an acceptable integer
   
   void read(int& val, int min, int max , const char* errorMessage = "Bad int, redo: ");


   // reads a C style string from console up to "len" characters into the
  // the string pointed by the "str" pointer
  // if the user enters more than "len" characters, this function
  // flushes the keyboard, prints the "errorMessage and reads again
  // untill user enters an acceptable string
   
   void read(char* str, int len, const char* errorMessage = "Bad length string, redo: ");
}
#endif // !
