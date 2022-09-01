#include <iostream>
#include <string>
using namespace std;
#include "Utils.h"
namespace sdds {

	Utils ut;
	bool debug = false;
	
	int Utils::getint(const char* prompt, istream& istr) const {
		int num;
		bool done = false;
		char newchar{};
		if (prompt) cout << prompt;
		while (!done) {
			istr >> num;
			if (!istr) { // meaning that the user failed to put a proper input
				istr.clear(); // it clears the error flag in cin
				istr.ignore(1000, '\n'); // now clear buffer and get rid of up to 1000 BYTES or a newline whichever one that comes first
				cout << " Invalid Input, Please Enter Again: ";
			}
			else {// now if the data entry was successful and cin was able to get the data and
				// put it in the variable, now we should check it:
				// these are the possible wrong enteries:
				// 1- enter a floating point like 10.3 (HOW to Detect?) -> should check for int<Enter> pattern
				// 2- enter a chacter after some int
				// any character apart from the number character is wrong!
				// So! Solution is to read one character at a time and not the whole thing!
				// This can be done using get(). Sowe defined nechar for that
				// 
				newchar = istr.get(); // We know that get() extracts characters from the stream
				if (newchar != '\n') { // when entring a correct integer and then enter, the only character in the stream
					// is newline. if anything else before the <enter> ('\n') happens that means it is wrong
					if (newchar == '.') 
						cout << "Floating point numbers not acceptable, please retry: \n>> ";  // now we are sending out a customized message because we know they entered decimal point charactcer
					else  
						cout << "char: [" << newchar << "] is not a proper entry, please retry \n>>"; // a general error message
					istr.ignore(1000, '\n'); // now we are throwing out the garbage left in the buffer
				}
				else { // if non of those happened we are good since the previous else part takes care of the 
					   // charcter entry like ten instead of 10 

					done = true;
				}
			}
		
		}
		return num;
	}
	istream& Utils::getint(int& num, const char* prompt, istream& istr)  const {
		num = getint(prompt, istr);
		return istr;
	}
	}