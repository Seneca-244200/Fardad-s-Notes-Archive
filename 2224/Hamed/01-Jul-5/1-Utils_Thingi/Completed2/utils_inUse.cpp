// This file contains main with the objective of practicing using
// Utils as a class

#include <iostream>
#include "Utils.h"


using namespace std;
using namespace sdds;


int main() {
	//Utils ut; not necessary because we have defined it in Utils.cpp and declaredext in Utils.h
	//1-
	//Utils ut;
	cout << "tolower -> " << ut.tolower('A') << endl;
	//2-
	char des_1[31]="**********";
	cout << "strcat -> " << ut.strcat(des_1, "Hamed tabrizi")<<endl;
	//3-
	cout << "strcmp -> " << ut.strcmp("Hamed Tabrizi ", "Hamed OsouliTabrizi") << endl;
	// (returnt the decimal of the integer ascii of the characters where characters are no more equivalant) in this case int('T')-int('O')= 84 - 79 = 5
	//4-
	cout << "strcmp -> " << ut.strcmp("Hamed Tabrizi ", "Hamed OsouliTabrizi", 3) << endl;
	// the second overload of strcmp that also accepts length to compare. This outputs zero if the length is within the equivalant period
	//5-
	cout << "strcpy -> " << ut.strcpy(des_1, "hamed osouli tabrizi") << endl;
	// This overwrites what already was in des, it is not concatination. It also nulterminates!
	//6-
	
	cout << "strcpy -> " << ut.strcpy(des_1, "hamed osouli tabrizi", 3) << endl;
	// the second overload of strcpy that accepts a length of copying. It also nulterminates!

	char des_2[31] = "%%%%%%%%%%%%%%%%%%%%";
	//7- 
	cout << "strncpy -> " << ut.strncpy(des_2, "hamed osouli tabrizi", 3) << endl;
	// its difference with strcpy is that it doesn't put a null termination at the end of string
	//8-
	cout << "strlen -> " << ut.strlen("hamed osouli tabrizi") << endl;
	//9-
	cout << "strstr -> " << ut.strstr("Hamed osouli Tabrizi ", "oul") << endl;
	// prints the first string from where the second string is found in it until the end
	//10-
	cout << "isalpha -> " << ut.isalpha(0) << endl;
	//11-
	cout << "isspace -> " << ut.isspace(' ') << endl;
	//12- trims what ever is not alphabet!
	char des[] = "12 hamed T)8%";
	ut.trim(des);
	cout << "trim -> " << des << endl;
	//13- copies and makes lower case
	char DES[21]="";
	char SOURCE[] = "Hello Hamed";
	cout << "lowerstrcpy -> " << ut.lowerstrcpy(DES, SOURCE) << endl;
    //14- Prompts for an input and reads the input for tge given 
	// number of characters into an array
	char fRead[51]="";
	cout << "Enter your text: \n";
	ut.read(fRead, 10);
	cout << "read -> " << fRead << endl;
	cin.ignore(1000, '\n');// this is crucial
	// because we didn't have a flush mechanism in
	// the read function so after that number
	// of characters read into the string,
	// the rest stays in the buffer
	// clear it and input ore than 15 characters
	// and see waht happens in the next line that
	// we are doing a getint
	 
	//15- prompts for an int and gets it!
	cout << ut.getint("input an integer: ", cin) << endl;

	//16- Since it returns cin, we can accept consequtive
	// inputs and put the in different values
	int a,b = 0;
	ut.getint(a, "input two integers and press <enter> after each: ") >> b;
	cout << a << " " << b;
	return 0;
}