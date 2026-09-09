#include <iostream>
using namespace std;
int main() {
	int a[17]{ 1,3,0,8,4,0,6,0,8,7,0,3,4,5,0,7,8 };
	cout << "OOP244 NAA - May 13" << endl;
	int zeros{}, nonZero{};
	for (int i = 0;i < 17;i++) {
		//zeros += (a[i] == 0);
		zeros += !a[i];
		nonZero += !!a[i];
	}
	cout << "Number of zeros: " << zeros << endl
		<< "Number of non-zeros: " << nonZero << endl;
	return 0;
}