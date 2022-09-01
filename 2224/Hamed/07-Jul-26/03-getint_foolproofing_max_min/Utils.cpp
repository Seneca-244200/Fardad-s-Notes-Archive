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
			if (!istr) { 
				istr.clear(); 
				istr.ignore(1000, '\n'); 
				cout << " Invalid Input, Please Enter Again: ";
			}
			else {
				newchar = istr.get(); 
				if (newchar != '\n') { 
					
					if (newchar == '.') 
						cout << "Floating point numbers not acceptable, please retry: \n>> ";  
					else  
						cout << "char: [" << newchar << "] is not a proper entry, please retry \n>>"; 
					istr.ignore(1000, '\n'); 
				}
				else { 
					done = true;
				}
			}
		
		}
		return num;
	}
	int Utils::getint(int& num, int max, int min, const char* prompt, std::istream& istr)
	{ // We already have a fool proof getint that accepts only inetegres
      // so we are going to use that one and then here just check the range
		bool done = false;
		while (!done){
			cout << "Enter an integer less than " << max << " and more than " << min;
			num = getint (" >>", istr);
			if (num >= max || num <= min)
				cout << "The entered number was not in the range, please retry \n>> ";
			else
				done = true;
		}
 		return num;
	}
	istream& Utils::getint(int& num, const char* prompt, istream& istr)  const {
		num = getint(prompt, istr);
		return istr;
	}
	
}