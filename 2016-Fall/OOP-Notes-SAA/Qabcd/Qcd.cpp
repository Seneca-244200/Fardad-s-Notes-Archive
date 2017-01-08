#include <iostream>
using namespace std;

template <typename Type>
void swap(Type* a, Type* b) {
   Type temp = *a;  // must have copy const
   *a = *b;  // must have operator =
   *b = temp;
}
template <typename Type>
void sort(Type a[], int size, bool ascending = true) {
   int i;
   int j;
   for (i = 0; i < (size - 1); i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (ascending) {
            if (a[j] > a[j + 1]) {  // must have operator>
               swap(&a[j], &a[j + 1]);
            }
         }
         else {
            if (a[j] < a[j + 1]) {  // must have operator<
               swap(&a[j], &a[j + 1]);
            }
         }
      }
   }
}

class Student {
   char* name_; // name_ is dynamic
   int stno_;
public:
   Student(char name[], int stno);
   ostream display(ostream& os)const;
   istream read(istream& is);
   ~Student();

   // Qc  asnwers:

   Student& operator = (const Student &S) {   // assign operator
      if (this != &S) {
         delete[] name_;
         name_ = new char[strlen(S.name_) + 1];
         strcpy(name_, S.name_);
         stno_ = S.stno_;
      }
   }
   Student(const Student &S) {   // copy const
      name_ = nullptr;
      operator=(S);
   }
   bool operator<(const Student &RO)const {
      return strcmp(name_, RO.name_) < 0;
   }
   bool operator>(const Student &RO) const {
      return strcmp(name_, RO.name_) > 0;
   }


};
// Qd answers;

ostream& operator<<(ostream& os, const Student& S) {
   return S.display(os);
}
istream& operator>(istream& os,  Student& S) {
   return S.read(os);
}
