#include <iostream>
using namespace std;
int main() {
	int a, b;
	char str[81];
	cout << "numbers (# #)\n> ";
	cin >> a >> b;
	cout << "c-string\n> ";
	cin >> str;
	cout << a << endl << b << endl << str << endl;
	return 0;
}