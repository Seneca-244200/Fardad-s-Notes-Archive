#include <iostream>
using namespace std;

int main() {
	char name[81];
	int age;
	cout << "Hello, welcome to Seneca Bar,  what is your name? ";
	cin >> name;
	cout << "Hey " << name << ", how old are you?" ;
	cin >> age;
	if (age > 19) {
		cout << "What would you like to drink?" << endl;
	}
	else {
		cout << "Get out of here!" << endl;
	}
	return 0;
}