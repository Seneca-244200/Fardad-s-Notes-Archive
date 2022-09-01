#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

// WE WANT TO GARANTEE THAT IF A CHILD IS ACCESSES THROUGH ITS
// PARENT POINTER OR REFERENCE, ALL THE METHODS OF THE CHILD WILL
// BE USED. SO WE ADD virtual KEYWORD TO THE FUNCTIOND OF PARENT 
// THAT ARE SHADOWED BY THE CHILD

int main() {
	debug = true;
	Animal* ap = new Cat("dixy", 7);
	Cat* cp = new Cat ("Persy", 3);
	
	cout << "---------------- Cat in a Cat pointer" << endl;
	cout << cp->getName() << " has " << cp->getnoofLifes () << " lifes" << endl;
	cp->act();
	cp->move();
	cp->play();
	cp->sound();
	cout << "---------------- Cat in an Animal pointer" << endl;
	cout << ap->getName() << endl;
	ap->act();
	ap->move();
	ap->sound();
	cout << "---------------- Deallocating memory" << endl;
	delete ap;
	delete cp;
 
	return 0;
}