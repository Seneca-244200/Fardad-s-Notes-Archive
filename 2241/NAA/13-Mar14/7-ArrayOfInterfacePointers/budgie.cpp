#include <iostream>
#include "Utils.h"
using namespace std;
#include "budgie.h"

namespace sdds{


  Budgie::Budgie(const char* name, const char* wordsKnown ):Bird(name){
   cout << "Creating " << *this <<  " Budgie" << endl;
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
     cout << "Remove " << name() << " the Budgie" << endl;
  }
}