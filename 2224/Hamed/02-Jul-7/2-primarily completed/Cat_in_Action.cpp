#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

int main() {
	debug = true;
	Cat C("Garfield", 9);
	C.act();
	C.move();
	C.play();
	C.sound();

	return 0;
}