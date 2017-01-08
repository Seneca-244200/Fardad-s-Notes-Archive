template <typename Type>
void swap(Type* a, Type* b) {
   Type temp = *a;
   *a = *b;
   *b = temp;
}
template <typename Type>
void sort(Type a[], int size, bool ascending = true) {
   int i;
   int j;
   for (i = 0; i < (size - 1); i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (ascending) {
            if (a[j] > a[j + 1]) {
               swap(&a[j], &a[j + 1]);
            }
         }
         else {
            if (a[j] < a[j + 1]) {
               swap(&a[j], &a[j + 1]);
            }
         }
      }
   }
}

class Student {
   char* name_;        // name_ is dynamic
   int stno_;
public:
   Student(char name[], int stno);
   ostream display(ostream& os)const;
   ~Student();
   //Qc:
   bool operator>(const Student& ro) {
      return strcmp(name_, ro.name_) > 0;
   }
   bool operator<(const Student& ro) {
      return strcmp(name_, ro.name_) < 0;
   }
   Student(const Student& S) {
      name_ = new char[strlen(S.name_) + 1];
      strcpy(name_, S.name_);
      stno_ = S.stno_;
   }  
   void operator=(const Student& S) {
      if (this != &S) {
         delete[] name_;
         name_ = new char[strlen(S.name_) + 1];
         strcpy(name_, S.name_);
         stno_ = S.stno_;
      }
   }
};
//Qd:
ostream& operator<<(ostream& os, const Student& S) {
   return S.display(os);
}
istream& operator>>(istream& os, Student& S) {
   return S.read(os);
}
