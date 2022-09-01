#ifndef SDDS_TEMPLATES_H
#define SDDS_TEMPLATES_H
#include <iostream>

namespace sdds {
	/// The template should always be in a .h file without .cpp file and the whole templet should go
 // there not just the prototype
//// SORT TEMPLAYE
//Swap
	template <typename Type>
	void swap(Type* a, Type* b) {
		Type tmp = *a;
		*a = *b;
		*b = tmp;
	}
	//sort
	template <typename Type> // how best is to extend to do ascending too by not adding >
	void sort(Type arr[], int n, bool ascending = false) {
		int i{}, j{};
		for (i = 0; i < n; i++) {
			for (j = 0; j < n - i - 1; j++) {
				if (ascending) {
					if (!(arr[j] < arr[j + 1])) {
						swap(&arr[j], &arr[j + 1]);
					}
				}
				else {
					if (arr[j] < arr[j + 1]) {
						swap(&arr[j], &arr[j + 1]);
					}
				}
			}
		}
	}
	//print
	template <typename Type>
	void print(Type arr[], int n) {
		for (int i = 0; i < n; i++) {
			if (i) std::cout << ","; //skip the comma before the first element
			std::cout << arr[i];

		}
		std::cout << std::endl;
	}


}

#endif // !SDDS_TEMPLATES_H



