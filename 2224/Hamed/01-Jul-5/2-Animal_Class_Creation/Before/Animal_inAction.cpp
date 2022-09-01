#include <iostream>
#include "Animal.h"

using namespace std;
using namespace sdds;

//const Animal& showAnimal(const Animal X) // try this too
const Animal& showAnimal(const Animal& X) {
	cout << "Showing " << X.getName() << " the animal" << endl;
	return X;
}

int main() {
	//sdds::debug = true;
	Animal A = "fifi";
	A.act();
	A.move();
	A.sound();
	showAnimal(A);
	Animal B = A;
	//B = A;
	B.act();
	B.move();
	B.sound();
	showAnimal(A);
	cout << "---------------End of Main" << endl;

	return 0;
}