#include <iostream>
using namespace std;

template <typename T1, typename T2>
T2 sum(T1 a, T2 b) {
	return a+b;
}

int main() {
	int a = 10;
	double b = 12.34;
	cout << sum(a, b) << endl;

	return 0;
}