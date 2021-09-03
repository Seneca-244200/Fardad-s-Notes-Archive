#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "pet.h"

namespace sdds{

  void prn(const char* m1, const char* m2, const char* m3, const char* m4){
    cout << m1 << m2 << m3 << m4 << endl;
  }


  Pet::Pet(const char* name){
    this->name(name);
    prn("Creating ", m_name, " the Pet");
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
    prn("Remove ", m_name, " the Pet");
  }
}