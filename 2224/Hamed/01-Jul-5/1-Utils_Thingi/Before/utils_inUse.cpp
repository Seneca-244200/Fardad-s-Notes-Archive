// This file contains main with the objective of practicing using
// Utils as a class

#include <iostream>
#include "Utils.h"

using namespace std;
using namespace sdds;


int main() {
	
	//1-
	cout << "tolower -> " << sdds::tolower('A') << endl;
	//2-
	//char des_1[31]="**********";
	//cout << "strcat -> " << sdds::strcat(des_1, "Hamed tabrizi")<<endl;
	//3-
	//cout << "strcmp -> " << sdds::strcmp("Hamed Tabrizi ", "Hamed OsouliTabrizi") << endl;
	// (returnt the decimal of the integer ascii of the characters where characters are no more equivalant) in this case int('T')-int('O')= 84 - 79 = 5
	//4-
	//cout << "strcmp -> " << sdds::strcmp("Hamed Tabrizi ", "Hamed OsouliTabrizi", 3) << endl;
	// the second overload of strcmp that also accepts length to compare. This outputs zero if the length is within the equivalant period
	//5-
	//cout << "strcpy -> " << sdds::strcpy(des_1, "hamed osouli tabrizi") << endl;
	// This overwrites what already was in des, it is not concatination. It also nulterminates!
	//6-
	
	//cout << "strcpy -> " << sdds::strcpy(des_1, "hamed osouli tabrizi", 3) << endl;
	// the second overload of strcpy that accepts a length of copying. It also nulterminates!

	//char des_2[31] = "%%%%%%%%%%%%%%%%%%%%";
	//7- 
	//cout << "strncpy -> " << sdds::strncpy(des_2, "hamed osouli tabrizi", 3) << endl;
	// its difference with strcpy is that it doesn't put a null termination at the end of string
	//8-
	//cout << "strlen -> " << sdds::strlen("hamed osouli tabrizi") << endl;
	//9-
	//cout << "strstr -> " << sdds::strstr("Hamed osouli Tabrizi ", "oul") << endl;
	// prints the first string from where the second string is found in it until the end
	//10-
	//cout << "isalpha -> " << sdds::isalpha(0) << endl;
	//11-
	//cout << "isspace -> " << sdds::isspace(' ') << endl;

	
	return 0;
}