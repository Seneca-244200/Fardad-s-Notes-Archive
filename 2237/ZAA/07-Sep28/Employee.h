#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
#include <iostream>
namespace sdds {
   /*
   structs are public by default
   classes are private by default
   
   */
   class Employee { // this is a class
//   private:
      char* m_name; // member_vars, attributes
      int m_empNo;
      double m_salary;
      void init( ); // member_function, Method
      void deallocate( );
   public:
      Employee( );  // these are NOT  FUNCTIONs
      Employee( const char* name );
      Employee( const char* name,
                int empNo,
                double salary = 0.0 );
                     // they are constructors
      ~Employee( );
      Employee& set( const char* name,
               int empNo,
               double salary );
      std::ostream& display(std::ostream& ostr = std::cout)const;

   };

}
#endif // !SDDS_EMPLOYEE_H_


