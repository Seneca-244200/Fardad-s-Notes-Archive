// This code has bad formatting that is not acceptable for
// midterm test, format it correctly and submit it
// in your mockup test
//
// The code must be indented properly
// with one statement in each line
//
// You can use visual studio or any other IDE to automatically
// format the code
// Before doing this make sure your editor is not using tab
// character in the text editor:

//For example:
// In visual studio do the following from the Main menu:
// Select: Tools/options
// In the left menu expand:
// Text Editor/"C/C++"/Tabs
// and setup the options as follows:
// Indenting: Smart
// Tab size: 3
// Indent Size: 3
// select: Insert Spaces.
//
// The other IDE's have the similar process, however you
// must figure it out yourself
//
// When you are developing your code in Visual studio
// from scratch to automatically format your code do
// the following from main menu:
//
// In Main menu select: Edit/Advanced/Format Document
// Or
// Press Ctrl+K and then Ctrl+D
//
// And then copy and paste the code in your Test.

#include <iostream>
using namespace std;
int getint(const char* prompt) {
if (prompt) std::cout << prompt; int value;std::cin >> value;std::cin.ignore(10000, '\n');return value;
}
class Container {
int m_value;
public:
Container(int value = 0) {
set(value);
}
// modifier
Container& set(int value) {
m_value = value;
return *this;
}
// query
int get()const {
return m_value;
}
ostream& display(ostream& ostr = cout) {
ostr << "Cn:[";ostr.width(9);ostr.fill('0');ostr.setf(ios::right);ostr << get();ostr.fill(' ');ostr.unsetf(ios::right);ostr << "]";return ostr;
}
istream& read(istream& istr = cin) {
m_value = getint("Container value: ");return istr;
}
Container& add(int value) {
m_value += value;return *this;
}
//  C.add(D)
Container& add(const Container& R) {
this->m_value += R.m_value;return *this;
}
Container sum(const Container& R)const {
Container theSum(this->m_value + R.m_value);return theSum;
}
bool isEmpty()const {
return m_value <= 0;
}
};

void IsContainerEmpty(const Container& C) {
if (C.isEmpty()) {cout << "Container is empty!" << endl;}else {cout << "Container is not empty!" << endl;}
}

int main() {Container C;Container D(200);IsContainerEmpty(C);IsContainerEmpty(D);C.read();cout << "You Entered: ";C.display() << endl;C.add(200);C.display() << endl;C.add(D).display() << endl;return 0;
}
