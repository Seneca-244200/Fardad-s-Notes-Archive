#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[51];
    char program[21];
    size_t stno;
};
void read(Student& st) {
    cout << "Name: ";
    cin >> st.name;
    cout << "Student number: ";
    cin >> st.stno;
}
void setPrg(Student& st, const char* program) {
    strcpy(st.program, program);
}
void setStudent(Student& st, const char* name, size_t stno) {
    strcpy(st.name, name);
    st.stno = stno;
}
void display(const Student& st) {
    cout << st.name << " (" << st.stno << ") enroled in " << st.program <<  endl;
}
int main() {
   cout << "OOP244 NRA - May 26" << endl;
   Student S;
   setStudent(S, "Fred Soley", 123456);
   setPrg(S, "CPA");
   display(S);
   read(S);
   display(S);
   return 0;
}