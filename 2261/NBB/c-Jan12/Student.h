#ifndef SENECA_STUDENT_H // compilation safeguard
#define SENECA_STUDENT_H
namespace seneca {
   struct Subject;// forward declration, that is prototype for a class(struct)
   struct Student {
      //unsigned int m_stno;
      size_t m_stno;
      Subject* m_sub;
      char m_name[61];




   };

   struct Subject {

   };
   void reg(const Student* S);


}



#endif // !SENECA_STUDENT_H
