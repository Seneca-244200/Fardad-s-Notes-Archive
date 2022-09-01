
#include <iostream>

// What if we want to use this double array class as a template? 
// Step 1: change all double to type to double 
// step 2: <type> should be added everywhere after the name of the class, Array here, except for
	       // a- Name of Constructors
	       // b- Name of destructor
	       // c- the class name right after template
using namespace std;

namespace sdds {

	template <class Type>
	class Array { // creating an array of doubles
		Type* m_array{};
		unsigned int m_size{};

	public:
		// constructor
		Array(unsigned int size = 10) {
			if (!size)  m_size = 10;
			else m_size = size;
			m_array = new Type[size]; // int or double arrays are not null terminated
		}
		// rule of three
		Array(const Array<Type>& A) {
			operator=(A);
		}
		Array<Type>& operator=(const Array<Type>& A) {
			if (this != &A) {
				m_size = A.m_size;
				delete[] m_array;
				m_array = new Type[A.m_size];
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
		Type* getArray() {
			return m_array;
		}
		//index operator overloads
		Type& operator[](unsigned int index) {
			if (index >= m_size) { // first check if the index is less than size, ifnot the array should be resized
				resize(index);
			}
			return *(m_array + index-1);
		}

		void resize(unsigned int index) {
			if (!index) m_size = 10; // incase if sombody entered zero
			Type* tmp{};
			tmp = new Type[index+1];
			for (unsigned int i=0; i < m_size; i++) {
				*(tmp + i) = *(m_array + i);
			}
			delete[] m_array;
			m_array = tmp;
			m_size = index;
		}
	};
}

template <typename Type>
// helper to print
void printArray(sdds::Array<Type> A, int size) { // to test copy assignment input argument is left to be value to a reference
	for (unsigned int i = 0; i < A.getSize(); i++) {
		if (i) cout << ",";
		cout << *(A.getArray() + i);
	}
	cout << endl << "-----------------------------------------" << endl;
}



int main() {

	sdds::Array<double> A(8);
	for (unsigned int i = 0; i < A.getSize(); i++) {
		*(A.getArray() + i) = 0.1 * i;
	}
	printArray(A, A.getSize());
	return 0;
}