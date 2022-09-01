#include <iostream>
#include "Cat.h"

using namespace sdds;
using namespace std;

// WE WANT SOME PUBLIC PARTS OF THE ANIMAL BE ACCESSIBLE
// BY CAT ONLY!

int main() {
	debug = true;
	Cat* cp = new Cat ("Persy", 3);
	

	// The cat pointer will no longer have access
	// to the protected memeber Function of its parrent
	// in public!
	// since getName is Protected now and is only 
	// accessible inside Cat Module
	
	//cout << cp->getName() << endl;
    
	// instead we wrote another getName() in cat
	// that accesses to the name through the getName()
	// of the animal

	cout << cp->sendName() << endl;
 
	return 0;
}