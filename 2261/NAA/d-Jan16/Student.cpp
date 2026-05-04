#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <iostream>
#include "Student.h"
using namespace std;
namespace seneca {
   void print(const Student* s) {
   
      if (s) {
         cout << "Name: " << s->name
            << ", GPA: " << s->gpa
            << ", Semester: " << s->semester
            << endl;
      }
   }
   void print(Student* s[], int count, const char* title) {
      cout << "** "<<title<<" ***********" << endl;
      for (int i = 0; i < count; i++) {
         print(s[i]);
      }
   }
   int loadStudents(const char* filename, Student students[], int maxSize) {
      FILE* fp = fopen(filename, "r");
      int count{ -1 }; // C++ way to nullify count
      if (fp) {
         count = 0;
         // Skip header line (optional, safe)
         fscanf(fp, "%*[^\n]\n");
         // n = scanf("%d %c %s %f", &a, &b, c, &d);
         while (count < maxSize &&
            fscanf(fp, " %63[^,],%f,%d", 
               students[count].name,
               &students[count].gpa,
               &students[count].semester) == 3            
            ) {
            count++;
         }
      }
      return count;
   }

   void sort(Student* arr[], int size, int sortFlag) {
      int i, j;
      Student* temp;

      for (i = 0; i < size - 1; ++i) {
         for (j = 0; j < size - i - 1; ++j) {

            bool swap{};// swap = false;

            switch (sortFlag) {
            case SORT_BY_NAME:
               if (strcmp(arr[j]->name, arr[j + 1]->name) > 0)
                  swap = true;
               break;

            case SORT_BY_SEMESTER:
               if (arr[j]->semester > arr[j + 1]->semester)
                  swap = true;
               break;

            case SORT_BY_GPA:
               if (arr[j]->gpa > arr[j + 1]->gpa)
                  swap = true;
               break;
            }

            if (swap) {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
         }
      }
   }
}