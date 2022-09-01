#include <iostream>
#include "Animal.h"
#include "Pet.h"
#include "dog.h"
#include "puppy.h"
#include "Rabit.h"


using namespace std;
using namespace sdds;

int main() {
	debug = true;
	// Animal A;
	// Pet P("Pepre");
	Dog D("Snowy", 5);
	cout << "==============================" << endl;
	D.act().move().sound();
	cout << "=============================="<<endl;
	Puppy P("poofy", 1, 7.55);
	cout << "==============================" << endl;
	P.act().move().sound();
	cout << "==============================" << endl;
	Animal* ap_P = new Puppy("happy", 1, 7.8);
	cout << "==============================" << endl;
	ap_P->act().move().sound();
	cout << "==============================" << endl;
	Animal* ap_R = new Rabbit("bunno", "White");
	cout << "==============================" << endl;
	ap_R->act().move().sound();
	cout << "==============================" << endl;
	delete ap_P;
	delete ap_R;

	Animal* A_array[3] = { new Puppy("bruno", 1, 10.23), new Rabbit("tapsy", "brown"), new Dog("sunny", 6)};
	
	for (int i = 0; i < 3; i++) {
		cout << "------------next species " << i + 1 << endl;
		cout << *A_array[i] << endl;
	}


	return 0;
}