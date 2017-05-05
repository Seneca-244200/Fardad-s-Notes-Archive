#ifndef SICT_EMPLOYEE_H_
#define SICT_EMPLOYEE_H_
class Employee {
   char m_name[128];
   int m_empno;
public:
   void name(const char* value);
   const char* name()const;
   void empno(int value);
   int empno()const;
   void display()const;
};



#endif // !
