#include <iostream>
#include <string>
using namespace std;
#include "Utils.h"
namespace sdds {

	Utils ut;
	
	int Utils::getint(const char* prompt, istream& istr) const {
		int num;
		bool done = false;
		char newchar{};
		if (prompt) cout << prompt;
		
		while (!done) {
			while (cin.peek() == '\n' || cin.peek() == '\t' || cin.peek() == ' ') { // added this to catch entering new line only
				clog << "Input and integer instead of newline or tab" << endl;
				cout << " Error " << endl;
				cin.ignore(1000, '\n'); // this is essential for clearing the buffer since cin.peek() DOES NOT clean anything!
			}
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
	{   
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
		if (prompt) cout << prompt;
		num = getint(prompt, istr);
		return istr;
	}

	bool Utils::debug() const
	{
		return m_debug;
	}
	void Utils::debug(bool value) // to set m_debug
	{
		if (value) { // this si where I am in debug mode and I want debug to work
			clog.clear(); // so clear the fail flags
		}
		else {
			clog.setstate(ios::failbit); // will set the failbit of clog and thus stop it from printing anything
		}
		m_debug = value;
	}
	Utils::Utils(bool value)
	{
		m_debug = value;
	}

}