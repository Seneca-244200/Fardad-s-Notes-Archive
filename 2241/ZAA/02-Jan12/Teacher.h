#ifndef SENECA_TEACHER_H
#define SENECA_TEACHER_H
namespace seneca {
   struct Teacher {
      char m_name[51]{};
      char m_subject[7]{};
      int m_rating{};  // 0 to 10
      char m_grading{}; // same as a grade, F and Dto A
   };

   void setTeacher(Teacher* T,const char* subject, const char* name, int rating, char grading);
   void printTeacher(const Teacher* T);

}
#endif // !SENECA_TEACHER_H
