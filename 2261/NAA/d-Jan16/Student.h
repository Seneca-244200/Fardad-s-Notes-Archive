#ifndef SENECA_STUDENT_H
#define SENECA_STUDENT_H
namespace seneca {
   #define NAME_LEN 64
#define SORT_BY_NAME     1
#define SORT_BY_SEMESTER 2
#define SORT_BY_GPA      3
   struct Student {
      char name[NAME_LEN];  /* Student name as C-string */
      int semester;         /* Semester number (1–6) */
      float gpa;
   };
   int loadStudents(const char* filename, Student students[], int maxSize);
   void sort(Student* arr[], int size, int sortFlag);
   void print(const Student* s);
   void print(Student* s[], int count, const char* title);
}

#endif // !SENECA_STUDENT_H


