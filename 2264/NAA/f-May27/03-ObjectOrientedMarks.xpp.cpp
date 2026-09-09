#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Marks {
    char m_title[31]{};
    int* m_marks{};
    size_t m_nom{}; // Number of marks
    void init() { // make sure this is called on a brand new Marks object
        setTitle("Marks");
        m_marks = nullptr;
        m_nom = 0;
    }
    void setTitle(const char* title) {
        strncpy(m_title, title, 30);
        m_title[30] = 0;
    }
    void freeMem() {
        delete[] m_marks;
        m_nom = 0;
    }
public:
    Marks() {// default or no arg costructor
        init();
    }
    Marks(const char* title) {
        setTitle(title);
    }
    ~Marks() {
        freeMem();
    }

    void init(const char* title) { // make sure this is called on a brand new Marks object
        setTitle(title);
        m_marks = nullptr;
        m_nom = 0;
    }
    void addMark(int value) {
        if (m_nom < 40) {
            if (m_marks == nullptr) { // Empty marks, this is the first
                m_marks = new int[1];
                m_nom = 1;
            }
            else {
                int* temp = new int[m_nom + 1]; //  1- allocate new size
                for (int i = 0; i < m_nom; i++) {// copy old memory to new one (temp one)
                    temp[i] = m_marks[i];
                }
                m_nom++; // update the size
                delete[] m_marks; // delete the old
                m_marks = temp; // make the data pointer point to new memory 
                // I have all the data plus one more element that is at the end and not set to anything yet 
            }
            m_marks[m_nom - 1] = value;
        }
    }

    void print()const {
        cout << m_title << endl;
        for (int i = 0; i < m_nom; i++) {
            cout << m_marks[i];
            if (i != m_nom - 1) {
                cout << ", ";
            }
        }
        cout << endl;
        //m_nom = 23; not possible since print is const
    }
};

int main() {
    cout << "OOP244 NAA - May 27th" << endl;
    Marks M, N("Quiz 2");

    //strcpy(M.m_title, "Hoohoo");
    for (int i = 10; i < 100; i += 7) {
        M.addMark(i);
    }
    M.print();


    for (int i = 20; i < 80; i += 4) {
        N.addMark(i);
    }
    N.print();


    return 0;
}