#include <iostream>
#include "Name.h"
#include "Utils.h"

using namespace std;
using namespace sdds;

void showName(const Name N) {
	N.display();
	cout << endl;
}

int main() {
	debug = true;
	Name N1("Hamed Tabrizi");
	cout << N1 << "\n----------------------" << endl;
	Name N2("John Doe");
	cout << N2 << "\n----------------------" << endl;
	Name N3 = N2;
	cout << N3 << "\n----------------------" << endl;
	showName(N1);
	cout << "\n----------------------" << endl;
	cin >> N1;
	cout << N1 << "\n----------------------" << endl;
	return 0;
}