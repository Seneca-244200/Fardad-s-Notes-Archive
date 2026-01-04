#include <iostream>
#include "String.h"
using namespace std;
using namespace seneca;
 int main() {
	String name = "Fred";
	String name2 = name;// this is NOT assignmet
	String name3(name);
	String more;
/*	String name2{name};
	String name2 = { name };
	*/
	//name2 = name;
	String& second = name2;
	name2 = second;
	more = name3 = name;
	cout << "Hello " << name << "!" << endl;
	cout << "Hello " << name2 << "!" << endl;
	cout << "Hello " << name3 << "!" << endl;
	return 0;
}