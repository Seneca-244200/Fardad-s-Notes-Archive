
#include <iostream>

using namespace std;

namespace sdds {
	class Array { // creating an array of doubles
		double* m_array{};
		unsigned int m_size{};

	public:
		// constructor
		Array(unsigned int size = 10) {
			if (!size)  m_size = 10;
			else m_size = size;
			m_array = new double[size]; // int or double arrays are not null terminated
		}
		// rule of three
		Array(const Array& A) {
			operator=(A);
		}
		Array& operator=(const Array& A) {
			if (this != &A) {
				m_size = A.m_size;
				delete[] m_array;
				m_array = new double[A.m_size];
				// now need to copy A in this in a for loop since it is an array
				for (unsigned int i = 0; i < m_size; i++) {
					*(m_array + i) = *(A.m_array + i); // this way we do not need to overload operator[].
				}
			}
			return *this;
		}
		virtual ~Array() {
			delete[] m_array;
		}
		// query
		int getSize() {
			return m_size;
		}
		double* getArray() {
			return m_array;
		}
		//index operator overloads
		double& operator[](unsigned int index) {
			if (index >= m_size) { // first check if the index is less than size, ifnot the array should be resized
				resize(index);
			}
			return *(m_array + index-1);
		}

		void resize(unsigned int index) {
			if (!index) m_size = 10; // incase if sombody entered zero
			double* tmp{};
			tmp = new double[index+1];
			for (unsigned int i=0; i < m_size; i++) {
				*(tmp + i) = *(m_array + i);
			}
			delete[] m_array;
			m_array = tmp;
			m_size = index;
		}
	};
}

// helper to print
void printArray(sdds::Array A, int size) { // to test copy assignment input argument is left to be value to a reference
	for (unsigned int i = 0; i < A.getSize(); i++) {
		if (i) cout << ",";
		cout << *(A.getArray() + i);
	}
	cout << endl << "-----------------------------------------" << endl;
}



int main() {

	sdds::Array A(8);
	for (unsigned int i = 0; i < A.getSize(); i++) {
		*(A.getArray() + i) = 0.1 * i;
	}
	printArray(A, A.getSize());
	sdds::Array B;
	B = A;
	printArray(B, B.getSize()); // copy assignemnt tested
	// the next line would be error without operator[] function
	A[15] = 6.8;
	cout << A[15] << endl ; // test it with a value higher than size to see the result!
	printArray(A, A.getSize()); // test the resize function
	return 0;
}