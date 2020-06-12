#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char name[21];
   int age;
};
void print(Student S) {
   cout << S.name << endl;
   cout << S.age << endl;
}
void set(Student* Sp, const char name[], int age) {
   strcpy(Sp->name, name);
   Sp->age = age;
}
int main() {
   Student St;
   set(&St, "Fardood", 46);
   print(St);
   return 0;
}