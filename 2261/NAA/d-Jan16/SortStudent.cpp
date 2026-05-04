#include "Student.h"
using namespace seneca;
int main() {
   Student st[50];
   int count = loadStudents("students.csv", st, 50);
   Student* name[50]{};
   Student* gpa[50]{};
   Student* sem[50]{ };
   Student* orig[50]{ };
   int i{};
   for (; i < 50; i++) {
      name[i] = &st[i];
      gpa[i] = &st[i];
      sem[i] = &st[i];
      orig[i] = &st[i];
   }
   sort(name, count, SORT_BY_NAME);
   sort(gpa, count, SORT_BY_GPA);
   sort(sem, count, SORT_BY_SEMESTER);
   print(orig, count, "Origingal oredr");
   print(name, count, "Sorted based on name");
   print(gpa, count, "Sorted based on gpa");
   print(sem, count, "Sorted based on semester");


   return 0;
}