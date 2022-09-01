#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

int main() {
	debug = true;
	Cat C; //works with the initial values
	cout << C.getName() << " has " << C.getnoofLifes() << " lifes" << endl;
	C.act();
	C.move();
	C.play();
	C.sound();
	cout << "Defining a cat with initilization at the moment of creation" << endl;
	Cat D("Garfield" , 6);
	cout << C.getName() << " has " << C.getnoofLifes() << " lifes" << endl;
	D.act();
	D.move();
	D.play();
	D.sound();
	cout << "----------------Main Ends Here" << endl;
	return 0;
}