#ifndef SDDS_NAME_H__
#define SDDS_NAME_H__
#include <iostream>
namespace sdds {
   class Name {
      char* m_value{};// the value of the name is kept out 
                       // side of the scope of class
                       // hence, a class with a resource!!!
   public:
      Name(const char* value = nullptr); // one arg and no arg
      // the rule of three
      Name(const Name& CP);
      Name& operator=(const Name& RightOperand); 
      virtual ~Name();
      // End of rule of three

      virtual void display(std::ostream& ostr = std::cout)const;

 
   };
   std::ostream& operator<<(std::ostream& ostr, const Name& N);

}
#endif // !SDDS_NAME_H__

