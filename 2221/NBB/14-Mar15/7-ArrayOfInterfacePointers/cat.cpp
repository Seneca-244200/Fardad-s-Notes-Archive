#include <iostream>
#include "Utils.h"
using namespace std;
#include "cat.h"

namespace sdds{

 
  Cat::Cat(const char* name, int numOfLives):Pet(name){
    m_numOfLives = numOfLives;
    cout << "Creating " << *this << " the Cat" << endl;
  }
  void Cat::act()const{
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::move()const{
    cout << "Move like " << name() << " the Cat" << endl;
  }
  void Cat::sound()const{
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
     cout << "Remove " << name() << " the Cat" << endl;
  }
}