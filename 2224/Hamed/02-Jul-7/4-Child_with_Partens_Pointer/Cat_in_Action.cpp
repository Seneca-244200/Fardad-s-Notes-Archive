#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

int main() {
	debug = true;
	// IN OO PROGRAMMING, IF YOU REFER TO A CHIL WITH ITS PARRENT POINTER OR REFERENCE
	// IT WILL FORGET THAT IT IS A CHILD AND IT WILL ACT EXACTLY LIKE ITS PARRENT
	Cat C("Garfield", 6);
	Animal* ap = new Cat("dixy", 7);
	//ap = &C; Could be used if we didn't have dixy
	Cat* cp = new Cat ("Persy", 3);
	// cp = &C; // don't need anymore cause we defined Persy
	Animal& ar = C;
	Cat& cr = C;
	cout << "----------------Cat in a Cat pointer" << endl;
	cout << cp->getName() << " has " << cp->getnoofLifes () << " lifes" << endl;
	cp->act();
	cp->move();
	cp->play();
	cp->sound();
	cout << "----------------Cat in an Animal pointer" << endl;
	//cout << ap->getName() << " has " << ap->getnoofLifes() << " lifes" << endl; // will give an error because animal doesn't have a getnoofLifes()
	cout << ap->getName() << endl;
	ap->act();
	ap->move();
	// ap->play(); // will give an error because animal doesn't have a paly()
	ap->sound();
	cout << "----------------Cat in a Cat reference" << endl;
	cout << cr.getName() << " has " << cr.getnoofLifes() << " lifes" << endl; 
	cr.act();
	cr.move();
	cr.play(); 
	cr.sound();
	cout << "----------------Cat in an Animal reference" << endl;
	//cout << ar.getName() << " has " << ar.getnoofLifes() << " lifes" << endl; // will give an error because animal doesn't have a getnoofLifes()
	cout << ar.getName() << endl;
	ar.act();
	ap->move();
	//ar.play(); // will give an error because animal doesn't have a paly()
	ar.sound();
	cout << "----------------Main Ends Here" << endl;
	delete ap;
	delete cp;
	return 0;
}