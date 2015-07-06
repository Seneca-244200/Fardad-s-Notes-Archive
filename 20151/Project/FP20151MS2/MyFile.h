// Final Project Milestone 2
// Tester program
// File	MyFile.h
// Version 1.0
// Date	2015/04/01
// Author	Fardad Soleimanloo
//
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/01           Preliminary release
/////////////////////////////////////////////////////////////////
#ifndef __244_STREAMABLE_H__
#define __244_STREAMABLE_H__
#include "Streamable.h"
namespace oop244{
  class MyFile : public Streamable {
    char _fname[256];
    char _text[10000];
  public:
    MyFile(const char* fname);
    std::fstream& store(std::fstream& file)const;
    std::fstream& load(std::fstream& file);
    std::ostream& display(std::ostream& os, bool linear)const;
    std::istream& conInput(std::istream& is);
    void print();
  };
}
#endif