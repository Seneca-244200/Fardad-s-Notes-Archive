#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "budgie.h"

namespace sdds{


  Budgie::Budgie(const char* name, const char* wordsKnown ):Bird(name){
    prn("Creating ", this->name(), " Budgie");
    teachWord(wordsKnown);
  }
  void Budgie::teachWord(const char* word) {
     if(m_wordsKnown[0] != '\0')
      strcat(m_wordsKnown, ",");
     strcat(m_wordsKnown, word);
  }
  void Budgie::act()const{
    cout << "Act playful, " << name() << " the Budgie" << endl;
  }
  void Budgie::move()const{
    fly();
  }
  void Budgie::fly()const{
    cout << "fly like crazy, " << name() << " the Budgie" << endl;
  }
  void Budgie::sound()const{
     Bird::sound();
     cout << endl << m_wordsKnown << endl;
  }
  Budgie::~Budgie(){
    prn("Remove ", name(), " the Budgie");
  }
}