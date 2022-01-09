#ifndef SDDS_OUTPUT_H
#define SDDS_OUTPUT_H
namespace sdds {
   class Output {
      int  m_width = 1;
      int m_precision = 6;
   public:
      Output& width(int value);
      Output& precision(int value);
      Output& operator<<(const char* Cstr);
      Output& operator<<(int value);
      Output& operator<<(double value);
   };
   extern Output fout;
}
#endif

