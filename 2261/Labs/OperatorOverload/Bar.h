#ifndef SENECA_BAR_H
#define SENECA_BAR_H
namespace seneca {
   class Bar {
      char m_title[51]{};
      size_t m_value{};
   public:
      Bar() = default; // safe empty state
      Bar(const char* title, size_t vlaue);
      operator const char* ()const;
      Bar& operator=(const char* title);
   };
}
#endif // !SENECA_BAR_H


