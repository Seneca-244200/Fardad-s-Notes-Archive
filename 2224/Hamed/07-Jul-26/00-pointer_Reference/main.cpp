#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int* ptr1 = &a;
	
	int& b = a;
	cout << b << endl;

	cout << ptr1 << endl;
	cout << *ptr1 << endl;

	int*& ptr2 = ptr1; // reference to a pointer
	cout << ptr2 << endl;
	cout << *ptr2 << endl;

	*ptr2 = 20;
	cout << ptr1 << endl;
	cout << *ptr1 << endl;

	return 0;
}