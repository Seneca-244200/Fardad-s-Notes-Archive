#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "pet.h"

namespace sdds{

  Pet::Pet(const char* name){
    this->name(name);
    cerr << "Creating " << m_name << " the Pet" << endl;;
  }
  const char* Pet::name()const{
    return m_name;
  }
  void Pet::name(const char* value){
    strncpy(m_name, value, 40);
    m_name[40] = char(0);
  }
  void Pet::move()const{
    cout << "Move like Pet" << endl;
  }
  void Pet::sound()const{
    cout << "Sound like Pet" << endl;
  }
  Pet::~Pet(){
    cerr << "Remove " << m_name << " the Pet" << endl;
  }
}