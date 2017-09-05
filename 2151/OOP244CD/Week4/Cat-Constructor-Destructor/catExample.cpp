//main.cpp
#include <iostream>
 using namespace std;
#include "cat.h"

 int main() {
    Cat frisky, lulu; //no-argument constructor is called twice. once for Frisky and once for Lulu.
	
	frisky.display();
	lulu.display();
		
	Cat boots(3,5); //Two-argument constructor is called
	boots.display();
	
	//Bad arguments
	Cat lucy(-1,'@'); // Two-argument constructor is called. 
					  // Because the arguments are not valid, the age and weight of lucy are set to default values.
					  
	lucy.display();
	
	//The destructor is called to destruct frisky
	//The destructor is called to destruct lulu
	//The destructor is called to destruct boots
}
