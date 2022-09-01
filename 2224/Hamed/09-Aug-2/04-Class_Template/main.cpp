#include <iostream>
using namespace std;


// What if I want to use the array class as a template?
// Class Template Vs Function Template
// So converting class to a template

namespace sdds {

	template <typename Type> // as soon as we add this we recive error in printArray function because it nolonger recognises Array 
	// thus <type> should be added everywhere after the name of the class, Array here, except for
	// 1- Name of Constructors
	// 2- Name of destructor
	// 3- the class name right after template

	class Array { 
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
		//operator overloads
		Type& operator[](unsigned int index) {
			if (index >= m_size) { // first check if the index is less than size, ifnot the array should be resized
				resize(index);
			}
			return *(m_array + index-1);
		}

		void resize(unsigned int index) {
			Type* tmp{};
			tmp = new Type[index+1];
			for (unsigned int i=0; i < m_size; i++) {
				*(tmp + i) = *(m_array + i);
			}
			delete[] m_array;
			m_array = tmp;
			if (!index) m_size = 10; // incase if sombody entered zero
			m_size = index;
		}
	};
}
// the effect of template is until here


// helper function that is accepting a tempalate, it should also become a tempaket
template <typename Type>
void printArray(sdds::Array<Type> A, int size) { // to test copy assignment input argument is left to be value to a reference
	for (unsigned int i = 0; i < A.getSize(); i++) {
		if (i) cout << ",";
		cout << *(A.getArray() + i);
	}
	cout << endl << "-----------------------------------------" << endl;
}



int main() {

	// now if I say Array A(8); how does it know what kind of class I am going to create?
	// In functions we didn't have this issue becaue the input/output type was known from the prototype already
	// but here it is not known. So we need to manually add signature using <type>
	sdds::Array<double> A(8);
	for (unsigned int i = 0; i < A.getSize(); i++) {
		*(A.getArray() + i) = 0.1 * i;
	}
	printArray(A, A.getSize());

	sdds::Array<int> B(16);
	for (unsigned int i = 0; i < B.getSize(); i++) {
		*(B.getArray() + i) =  i+2;
	}
	printArray(B, B.getSize());
	
	return 0;
}