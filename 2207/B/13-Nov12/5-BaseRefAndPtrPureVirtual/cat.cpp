#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
namespace sdds{
  Cat::Cat(const char* name, int numOfLives):Animal(name){
    m_numOfLives = numOfLives;
    cout<<"Creating "<< this->name()<< " the Cat"<<endl;
  }
  void Cat::act(){
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
     cout << "Remove "<< name() << " the Cat" << endl;
  }
}