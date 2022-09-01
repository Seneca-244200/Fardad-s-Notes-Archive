#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

// Review of July 7th session
int main() {
	debug = true;
	Cat* cp = new Cat ("Persy", 3);
	Animal* ap = new Cat("dixy", 7);
	
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