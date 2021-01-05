#pragma once
namespace sdds {
   class Output {
      unsigned int flags;
      int m_width;
   public:
      Output& width(int value);
      Output& operator<<(int a);
      Output& operator<<(const char* Cstr);
   };
   class Input {
      unsigned int flags;
      int m_width;
   public:
      Input& width(int value);
      Input& operator>>(int& a);
      Input& operator>>( char* Cstr);
   };
   extern Output fout;  // kind of a prototype for an object instant that is declaried
                        // in another scope
}
