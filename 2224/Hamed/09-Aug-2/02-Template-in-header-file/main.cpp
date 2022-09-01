#include <iostream>
#include "Utils.h"
#include "templates.h"

using namespace std;
using namespace sdds;

class Name {
	char* m_value{};
public:
	Name(const char* name = nullptr) {
		m_value = ut.alcpy(name);
	}
	Name(const Name& N) {
		operator=(N);
	}
	Name& operator=(const Name& N) {
		if (this != &N) {
			delete[] m_value;
			m_value = ut.alcpy(N.m_value);
		}
		return *this;
	}
	virtual ~Name() {
		delete[] m_value;
	}
	virtual std::ostream& display(std::ostream& ostr = std::cout) const {
		return ostr << m_value;
	}
	// defining operator+ to work with the sum
	Name& operator+(const Name& N) {
		char* tmp{};
		tmp = new char[ut.strlen(m_value) + ut.strlen(N.m_value) + 1];
		ut.strcpy(tmp, m_value);
		ut.strcat(tmp, N.m_value);
		delete[] m_value;
		m_value = tmp;
		return *this;
	}
	// defining boolean for operator< to work with sort within and if condition
	bool operator<(const Name& N) {
		return ut.strcmp(m_value, N.m_value) < 0;
	}
};

std::ostream& operator<<(std::ostream& ostr, const Name& N) {
	return N.display(ostr);
}

template <typename Type>
Type sum(Type a, Type b) {
	return a + b;
}

///// The template should always be in a .h file without .cpp file and the whole template should go
// // there not just the prototype
////// SORT TEMPLAYE
////Swap
//template <typename Type>
//void swap(Type* a, Type* b) {
//	Type tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
////sort
//template <typename Type> // how best is to extend to do ascending too by not adding >
//void sort(Type arr[], int n, bool ascending = false) {
//	int i{}, j{};
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (ascending) {
//				if (!(arr[j] < arr[j + 1])) {
//					swap(&arr[j], &arr[j + 1]);
//				}
//			}
//			else {
//				if (arr[j] < arr[j + 1]) {
//					swap(&arr[j], &arr[j + 1]);
//				}
//			}
//		}
//	}
//}
////print
//template <typename Type>
//void print(Type arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		if (i) cout << ","; //skip the comma before the first element
//		cout << arr[i];
//
//	}
//	cout << endl;
//}



int main() {
	int a{ 10 }, b{ 20 };
	cout << "c=" << sum(a, b) << endl;

	double d{ 2.3 }, e{ 5.8 };
	cout << "f=" << sum(d, e) << endl;

	Name N{ "Seneca" }, M{ "College" };
	// will recieve this error: binary '+': 'Type' does not define
	// this operator or a conversion to a type acceptable to the predefined operator
	// the reason is that + operator is not defined for this 
	cout << sum(N, M) << endl;

	// sort for Name? 
	Name S("Graduation");
	Name O[] = { N,M,S };
	// will face this error: binary '<': 'Type' does not define
	// this operator or a conversion to a type acceptable to the
	// predefined operator. so operator< overload must be implemented for that
	sort(O, 3 , true);
	print(O, 3);
}