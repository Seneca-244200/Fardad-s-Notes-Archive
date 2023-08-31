#include <iostream>
#include <cstring>
using namespace std;
#include "bird.h"

namespace sdds{


  Bird::Bird(const char* name) :Pet(name){
    cerr << "Creating " <<  this->name() << " the Bird" << endl;
  }
  void Bird::act()const{
    cout << "Act playful, " << name() << " the Bird" << endl;
  }
  void Bird::move()const{
    fly();
  }
  void Bird::sound()const{
    cout << "Tweet!" << endl;
  }
  Bird::~Bird(){
     cerr << "Remove " << name() << " the Bird" << endl;
  }
}