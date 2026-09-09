#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Marks {
    char title[31]{};
    int* marks{};
    size_t nom{}; // Number of marks
};
void setTitle(Marks& m, const char* title) {
    strncpy(m.title, title, 30);
    m.title[30] = 0;
}

void initMarks(Marks& m) { // make sure this is called on a brand new Marks object
    setTitle(m, "No Title");
    m.marks = nullptr;
    m.nom = 0;
}
void initMarks(Marks& m, const char* title) { // make sure this is called on a brand new Marks object
    setTitle(m, title);
    m.marks = nullptr;
    m.nom = 0;
}
void addMark(Marks& M, int value) {
    if (M.marks == nullptr) { // Empty marks, this is the first
        M.marks = new int[1];
        M.nom = 1;
    }
    else {
        int* temp = new int[M.nom + 1]; //  1- allocate new size
        for (int i = 0; i < M.nom; i++) {// copy old memory to new one (temp one)
            temp[i] = M.marks[i];
        }
        M.nom++; // update the size
        delete[] M.marks; // delete the old
        M.marks = temp; // make the data pointer point to new memory 
        // I have all the data plus one more element that is at the end and not set to anything yet 
    }
    M.marks[M.nom - 1] = value;
}
void freeMem(Marks& M) {
    delete[] M.marks;
    M.nom = 0;
}
void printMarks(const Marks& m) {
    cout << m.title << endl;
    for (int i = 0; i < m.nom; i++) {
        cout << m.marks[i];
        if (i != m.nom - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}
int main() {
   cout << "OOP244 NAA - May 27th" << endl;
   Marks M;
   initMarks(M);
   setTitle(M, "Quiz 1");
   for (int i = 10; i < 100; i += 7) {
       addMark(M, i);
   }
   printMarks(M);
   freeMem(M);
   return 0;
}