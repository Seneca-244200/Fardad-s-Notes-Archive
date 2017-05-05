#ifndef SICT_STUDENT_H_
#define SICT_STUDENT_H_
class Student {
   char m_name[128];
   int m_stno;
public:
   void name(const char* value);
   const char* name()const;
   void stno(int value);
   int stno()const;
   void display()const;
};



#endif // !
