#ifndef SDDS_NAME_H__
#define SDDS_NAME_H__
#include <iostream>
namespace sdds {
   class Name {
      char* m_value = nullptr;
   public:
      Name(const char* value = nullptr);
      Name(const Name& N);
      Name& operator=(const Name& N);
      virtual ~Name();
      virtual std::ostream& display(std::ostream& ostr = std::cout)const;
   };
   std::ostream& operator<<(std::ostream& ostr,
      const Name& N);
}
#endif // !SDDS_NAME_H__


