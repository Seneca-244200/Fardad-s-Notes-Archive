#pragma once
#ifndef SENECA_MARKS_H
#define SENECA_MARKS_H
#include "Title.h"
namespace seneca {
    class Marks {
        Title m_title{ "Marks" };
        int* m_marks; // set to nuyll
        size_t m_nom; // Number of marks set to zero
        void init();
        void freeMem();
    public:
        Marks();
        Marks(const char* title);
        ~Marks();
        void init(const char* title);
        void addMark(int value);
        void print()const;
    };

}

#endif // !SENECA_MARKS_H

