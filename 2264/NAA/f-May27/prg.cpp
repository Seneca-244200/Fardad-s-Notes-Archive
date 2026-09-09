#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Marks.h"
using namespace std;

int main() {
    cout << "OOP244 NAA - May 27th" << endl;
    seneca::Marks M, N("Quiz 2");

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