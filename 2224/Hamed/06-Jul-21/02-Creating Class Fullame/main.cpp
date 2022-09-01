#include <iostream>
#include "FullName.h"

using namespace std;
using namespace sdds;

// to test the copy constructor, pass the value not the reference by purpose
void showname(const Fullname FN) {
	cout << FN.getName();
	cout << " ";
	cout << FN.getLastname() << " copy constructor checked" << endl;


}

int main() {

	Fullname name;
	cout << "What is your name? " << endl;
	cin >> name;
	cout << "Welcome " << name.getName() << " " << name.getLastname() << endl;
	cout << "--------test insertion overload " << name << endl;
	Fullname other("John", "Doe");
	cout << "--------------" << endl;
	cout << other << endl;

	other = name;
	cout << other.getName() << " " << other.getLastname() << " ,assignment operator checked" << endl;

	showname(other);

	return 0;
}