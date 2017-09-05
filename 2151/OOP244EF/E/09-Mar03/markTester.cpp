
#include "mark.h"

using namespace oop244;

int main(){
  Mark
    ipc("Introduction to Programming Using C", "IPC144A", 30),
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40, 50),
    oop2 = oop1; // copying (same as oop2(oop1));
  ipc = oop1 + oop2;
  cout << ipc << endl << oop1 << endl << oop2 << endl;

  return 0;
}
