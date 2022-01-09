#ifndef SDDS_NAME_H__
#define SDDS_NAME_H__
#include <iostream>
namespace sdds {
   class Name {
      char* m_value{}; // the value of the name is kept out 
                       // side of the scope of class
                       // hence, a class with a resource!!!
   public:
      Name(const char* value = nullptr);
      Name(const Name& cp);               // beg Rule Of three
      Name& operator=(const Name& RO);
      virtual ~Name();                    // end Rule Of three
      virtual void display(std::ostream& ostr = std::cout)const;
   };
   std::ostream& operator<<(std::ostream& ostr, const Name& N);

}
#endif // !SDDS_NAME_H__

