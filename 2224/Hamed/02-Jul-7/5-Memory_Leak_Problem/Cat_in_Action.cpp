#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

int main() {
	debug = true;
	Animal* ap = new Cat("dixy", 7);
	//ap = &C; Could be used if we didn't have dixy
	Cat* cp = new Cat ("Persy", 3);
	// cp = &C; // don't need anymore cause we defined Persy
	
	cout << "---------------- Cat in a Cat pointer" << endl;
	cout << cp->getName() << " has " << cp->getnoofLifes () << " lifes" << endl;
	cp->act();
	cp->move();
	cp->play();
	cp->sound();
	cout << "---------------- Cat in an Animal pointer" << endl;
	//cout << ap->getName() << " has " << ap->getnoofLifes() << " lifes" << endl; // will give an error because animal doesn't have a getnoofLifes()
	cout << ap->getName() << endl;
	ap->act();
	ap->move();
	// ap->play(); // will give an error because animal doesn't have a paly()
	ap->sound();
	cout << "---------------- Deallocating memory" << endl;
	delete ap;
	delete cp;

	// FOR DIXY, ONLY ANIMAL DESTRUCTOR IS CALLED AND THUS THE CAT 
	// PART LEAKS TO THE MEMORY. WE NEED TO FIX IT BY MAKING IT ABLE
	// TO ALSO CALL CAT DESTRUCTOR REGARDLESS THAT IT IS AN ANIMAL 
	
	// IN FACT WE LOSE ACCESS TO CHILD PARTS COMPLETELY IF WE ACCEEE IT THROUGH PARENT POINTER OR REFERENCE
	return 0;
}