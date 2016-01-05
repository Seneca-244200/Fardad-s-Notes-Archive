#include "mark.h"

using namespace oop244;

int main(){
  Mark
    ipc("Introduction to Programming Using C", "IPC144A", 30),
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40, 50),
    oop2 = oop1; // copying (same as oop2(oop1));
  ipc.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  oop1.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // --------------------------
  oop2.dspSubName().space().dspSubCode().space().dspWMark().nl();
  //  ipc.add(oop1);
  //  ipc.operator+=(oop1);
  oop2 = ipc += oop1;
  ipc.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  //oop1.addone();
  //oop1.operator++();
  ++oop1;
  oop1.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  oop2 = ++oop1;
  oop1.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  oop2.dspSubName().space().dspSubCode().space().dspWMark().nl();

  oop2 = oop1++;
  oop1.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  oop2.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  return 0;
}

