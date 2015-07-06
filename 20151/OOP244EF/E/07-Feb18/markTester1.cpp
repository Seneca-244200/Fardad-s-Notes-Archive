#include "mark1.h"

using namespace oop244;

int main(){
  Mark
    ipc("Introduction to Programming Using C", "IPC144A", 90),
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40, 50),
    oop2;
  ipc.dspSubName();
  ipc.space();
  ipc.dspSubCode();
  ipc.space();
  ipc.dspWMark();
  ipc.nl();
  oop1.dspSubName();
  oop1.space();
  oop1.dspSubCode();
  oop1.space();
  oop1.dspWMark();
  oop1.nl();
  oop2.dspSubName();
  oop2.space();
  oop2.dspSubCode();
  oop2.space();
  oop2.dspWMark();
  oop2.nl();
  return 0;
}