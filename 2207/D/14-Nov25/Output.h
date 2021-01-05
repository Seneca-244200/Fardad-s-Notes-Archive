#pragma once
namespace sdds {
   class Output {
   public:
      bool good();
      Output& operator<<(int a);
      Output& operator<<(const char* Cstr);
      operator bool() {
         return good();
      }
   };
   extern Output fout;  // something like a prototype for an object 
}