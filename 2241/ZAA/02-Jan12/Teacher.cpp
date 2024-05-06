#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Teacher.h"
using namespace std;
namespace seneca {

    void setTeacher(Teacher* T, const char* subject, const char* name, int rating, char grading){
       strcpy(T->m_name, name);
       strcpy(T->m_subject, subject);
       T->m_rating = rating;
       T->m_grading = grading;
    }

    void printTeacher(const Teacher* T){
       cout << T->m_name << ": subject (" << T->m_subject << ")" << endl
          << "Rating: " << T->m_rating << endl
          << "Grading: " << T->m_grading << endl;
    }

}