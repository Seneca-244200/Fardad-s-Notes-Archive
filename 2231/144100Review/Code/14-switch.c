#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   // switch always equality
	switch (var) {
	case val1:
		break;  // the olny place break is permitted
	case val2:
	case val2_1:
		break;
   case val3: 
		break;
	default:
		break;
	}
	if (var == val1) {
		// case val1:
	}
	else if (var == val2 || var == val2_1) {
		// case val2:
	}
	else if (var == val3) {
		// case val3:
	}
	else {
	   //default:
	}

	// switch one or none
	switch (var) {
	case val1:
		break;  // the olny place break is permitted
	case val2:
	case val2_1:
		break;
	case val3:
		break;
	}
	if (var == val1) {
		// case val1:
	}
	else if (var == val2 || var == val2_1) {
		// case val2:
	}
	else if (var == val3) {
		// case val3:
	}
   return 0;
}