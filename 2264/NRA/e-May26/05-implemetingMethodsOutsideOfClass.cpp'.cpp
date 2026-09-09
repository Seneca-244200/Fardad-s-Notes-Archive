#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char m_name[51];
    char m_program[21];
    size_t m_stno;
    void displayStno()const;
public:
    void read();
    void setPrg(const char* program);
    void set(const char* name, size_t stno);
    void display()const;
};
void Student::displayStno()const {
    cout << "(" << m_stno << ")";
}
void Student::read() {
    cout << "Name: ";
    cin >> m_name;
    cout << "Student number: ";
    cin >> m_stno;
}
void Student::setPrg(const char* program) {
    strcpy(m_program, program);
}

void Student::set(const char* name, size_t stno) {
    strcpy(m_name, name);
    m_stno = stno;
}
void Student::display()const { // read only method
    cout << m_name;
    displayStno();
    cout << " enroled in " << m_program << endl;
    //m_stno = 0; this will cause error
}

void formatStudent(const Student& S) {
    cout << "-------------------------------------------" << endl;
    S.display();
    cout << "-------------------------------------------" << endl;
}


int main() {
    cout << "OOP244 NRA - May 26" << endl;
    Student S;
    S.set("Fred Soley", 123456);
    S.setPrg("CPA");
    formatStudent(S);
    return 0;
}