#pragma once
namespace sdds {
   class Input {
   public:
      Input& operator>>(int& a);
      Input& operator>>(char* Cstr);
   };
   class Output {
      int m_width = 1;
   public:
      Output& width(int value);
      Output& operator<<(int a);
      Output& operator<<(const char* Cstr);
   };
   // kind of like prototypes for 
   // global objects or variable
   extern Input fin;
   extern Output fout, ferr, flog;
}

