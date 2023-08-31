#include <iostream>
using namespace std;
void foo(int& a) {
	a = 200;
}
int main() {

	int b = 10;
	foo(b);  // foo(int& a = b);
	return 0;
}