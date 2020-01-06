#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__
namespace sdds {
   class String {
      unsigned int m_size;
      char* m_data;
   public:
      String();
      String(const char* str);
      ~String();
   };
}


#endif // !SDDS_STRING_H__
