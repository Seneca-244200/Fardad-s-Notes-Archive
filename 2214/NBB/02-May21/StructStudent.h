struct Student {
   int stno;
   char name[41];
   double gpa;
};

void getStInfo(struct Student* stptr);
void prnStudent(const struct Student* stdptr);