#include <iostream>
using namespace std;

class Population {
	int m_value{};
public:
	Population(int value = 0) : m_value{ value } {
	}
	Population& operator+(const Population& P) {
		this->m_value = this->m_value + P.m_value;
		return *this;
	}
	ostream& display(ostream& ostr = cout) const {
		cout << "P= " << m_value;
		return ostr;
	}
};

ostream& operator<< (ostream& ostr, Population P) {
	return P.display();
}

class Army {
	int m_size;
public:
	Army(int value = 0) : m_size{ value } {
	}
	Army& operator+(const Army& P) {
		this->m_size = this->m_size + P.m_size;
		return *this;
	}
	ostream& display(ostream& ostr = cout) const {
		cout << "A= " << m_size;
		return ostr;
	}
};

ostream& operator<< (ostream& ostr, Army P) {
	return P.display();
}

//int sum(int a, int b) {
//	return a + b;
//}
//
//double sum(double d, double e) {
//	return d + e;
//}
//
//Population sum(Population P, Population Q) {
//	return P + Q;
//}
//
//Army sum(Army A, Army B) {
//	return A + B;
//}

template <typename Type>
Type sum(Type a, Type b) {
	return a + b;
}

int main() {
	int a{ 10 }, b{ 20 }, c{};
	cout << "c=" << sum(a, b) << endl;

	double d{ 2.3 }, e{ 5.8 }, f{};
	cout << "f=" << sum(d, e) << endl;

	Population P{ 10000 }, Q{ 20000 };
	cout << sum(P, Q) << endl;

	Army A{ 1000 }, B{ 2000 };
	cout << sum(A, B) << endl;

}