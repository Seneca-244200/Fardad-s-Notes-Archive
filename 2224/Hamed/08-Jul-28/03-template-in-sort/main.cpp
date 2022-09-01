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
	// We have to define < so that it works in the sort algorithm
	bool operator<(const Population& Q) {
		return m_value < Q.m_value;
	}
};

ostream& operator<< (ostream& ostr, Population P) {
	return P.display();
}

/// Thus, each template should have a documentation telling us that what each
/// type must have defined.
/// in this swap template, the following must be defined:
/// 1- copy assinment in line 37 
/// 2- assignemnt operator overload in line 38 

template <typename Type>
void swap(Type* a, Type* b) {
	Type tmp = *a;
	*a = *b;
	*b = tmp;
}

//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}


/// Thus, each template should have a documentation telling us that what each
/// type must have defined.
/// in this swap template, the following must be defined:
/// 1- operator< overload in line 59 
/// 
template <typename Type>
void sort(Type arr[], int n) {
	int i{}, j{};
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) { // sorts in descending fashion
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

//void sort(int arr[], int n) {
//	int i{}, j{};
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (arr[j] < arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}

template <typename Type>
void print(Type arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (i) cout << ","; //skip the comma before the first element
		cout << arr[i] ;
		
	}
	cout << endl;
}

//void print(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		if (i) cout << ","; //skip the comma before the first element
//		cout << arr[i];
//
//	}
//}

int main() {
	int a[] = { 2,4,3,5,3,4,6,7,8 };
	sort(a, 9);
	print(a, 9);
	double b[] = { 2.2,3.3,6.8,9.8,1.6 };
	sort(b, 5);
	print(b, 5);
	Population P[] = { 3000,2500,10000,6800,4650 }; 
	// gives error, binary '<': 'Type' does not define this operator or a 
	// conversion to a type acceptable to the predefined operator.
	// the reason is < is not defined in Class Population
	sort(P, 5);
	print(P, 5);
	return 0;
}