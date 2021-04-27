#include <iostream>
#include <cstring>
using namespace std;
#include "budgie.h"

namespace sdds{


  Budgie::Budgie(const char* name, const char* wordsKnown ):Bird(name){
    prn("Creating ", this->name(), " Budgie");
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
    cout << "Tweet!" << endl;
  }
  Budgie::~Budgie(){
    prn("Remove ", name(), " the Budgie");
  }
}