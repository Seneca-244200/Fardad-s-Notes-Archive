#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;


int main() {
	debug = true;
	
	Animal* ap = new Cat("dixy", 7);
	Cat* cp = new Cat ("Persy", 3);

	cout << "---------------- Cat in a Cat pointer" << endl;
	cp->act();
	cp->move();
	cp->play();
	
	cp->sound(); // since sound() is pure virtual, the sound of the
	// cat is called
	cout << "---------------- Cat in an Animal pointer" << endl;
	ap->act();
	ap->move();
	ap->sound();
	cout << "---------------- Deallocating memory" << endl;
	delete ap;
	delete cp;
 
	return 0;
}

// If you want a child to be able to be instantiated, all
// pure virtual memebr functions of its parrent must
// be defined.
// In fact, when a parrent has a pure virtual member function
// it dectates to the child that it must be defined
// If NOT its grandchild! or grandgrandchild! should define
// it at some level. Otherwise they cannot be independantly
// instantiated