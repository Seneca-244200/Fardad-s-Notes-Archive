#ifndef SENECA_BUDGIE_H
#define SENECA_BUDGIE_H
#include "bird.h"
namespace seneca{
  class Budgie:public Bird{
    char m_wordsKnown[1024];
  public:
    Budgie(const char* name = "Tweety", const char* wordsKnown = "");
    void teachWord(const char* word);
    void act()const;
    void move()const;
    void fly()const;
    void sound()const;
    ~Budgie();
  };
}
#endif