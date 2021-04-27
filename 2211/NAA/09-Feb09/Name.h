#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
namespace sdds {
   class Name {
      char* m_value;
      void init(); // it is private now!!!
   public:
      // imprsonates a default constructor too, since it has default values 
      // for all the arguments and there fore the constructor can be invoked 
      // without any argument hence no argument consturctor is avaliable 
      // hense (defualt constructor)
      Name(const char* thename = "Blank Name", int maxLen = 70);
      ~Name();

    /*  Name* returnThis();
      Name& returnTargetOfThis();*/


      Name& addToName(const char* value);
      Name& setEmpty();
      Name& setName(const char* value);
      std::ostream& print(std::ostream& ostr = std::cout)const;
      void deallocate();
   };
}
#endif // !SDDS_NAME_H


