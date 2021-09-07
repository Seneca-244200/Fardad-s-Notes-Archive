# Feedback and coding problems that can effect your mark in workshops.
The following are the feedbacks given to students as the workshops are marked. You are responsible to study these and make sure your code does not contain problems as are shown here. <br />
Since the feedbacks are given on each workshop you will not lose any marks on the same workshop the feedback is given to. However, you may lose marks if you make the same mistake in later workshops. <br />
**Add this page to your "watched" pages on Github to receive notifications if any new feedback is issued.**

|Code|Effective<br />as of workshop|Problem|
|---|----|----|
|[BK](#bk) | w2  | Use of break or continue statements in a loop |
|[BS](#bs) | w2 | Bad header file safeguard define names| 
|[CA](#ca) | w2 | Custom headerfiles must be included after library headerfiles|
|[CM](#cm)  | w2 | Unnecessary comments or Commented code left in the release version |
|[CRT](#crt) | w2 | `#define _CRT_SECURE_NO_WARNINGS` should be the first line in your .cpp file and never in a headerfile|
|[CT](#ct)| w2 | Signature or citation missing |
|[CV](#cv)| w2 | Relative constant values should reside inside the namespace |
|[CSTR](#cstr)| w4 | Reuse your own cstring.h and cstring.cpp from workshop 1 instead of library &lt;cstring&gt; |
|[FR](#fr) | w4 | For filler repetition and formatting use width and fill |
|[IH](#ih) | w2 | Unneeded header file included in another header file| 
|[IN](#in) | w3 | Sloppy formatting, bad or inconsistent indentation in the code  |
|[IOS](#ios)| w2 | You have used stdio library functions instead of iostream cin and cout |
|[MR](#mr)  | w2 | Unnecessary multiple return statements|
|[NL](#nl) | w4 | Always set a pointer to null after the memory it is pointing to is deleted|
|[RC](#rc)| w2 | Reuse your code|
|[RD](#rd) | w3 | Unnecessary or redundant logic used in code. |
|[RS](#rs) | w4 | Research the behaviour of the functions used instead of assuming what they do |
|[RT](#rt) | w2 | Insufficient or Empty reflection |
|[SG](#sg) | w2 | You are not allowed to use the C++ string object here|
|[SM](#sm) | w4 | The code could have been written much shorter in length and simpler |
|[SPAM](#spam)| w2 | Too many submissions |
|[STRH](#strh)| w2 | Used &lt;cstring&gt; library to develop "cstring.h" string funcitons |
|[TMP](#tmp) | w3 | Unnecessary temporary variables used in the functions. |
|[UD](#ud) | w4 | Unnecessary DMA |
|[UN](#un) | w2 | Used &lt;cstring&gt; library to develop "cstring.h" string functions. |



# Coding Feedback





## IOS
### You have used printf and scanf instead of cout and cin, the whole purpose of the workshops are to practice C++ concepts and not redoing your IPC144
### Problematic code sample
```C++
void Food::display()const {
	if (time != 0) {
		printf("| ");
		char padded[31];
		strCustomPad(padded, name, '.', 30);
		printf("%s",padded); //"%s" prevents it from eating the '%'

		printf(" | %4d | %-10s |\n", cals, TIME_STRING[time]);
	}
	else
		printf("| xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx | xxxx | xxxxxxxxxx |\n");
	return;
}
```


## CSTR
### You are using library &lt;cstring&gt; functions where you could use your own cstring functions implemented in workshop 1 DIY
### Problematic code sample
```C++
// Not Applicable
```

## FR
### For filler repetition and formatting use width and fill and avoid hard coding the output
### Problematic code sample
```C++
   cout << "| xxxxxxxxxxxxxxxxxxxx | xxxxxxx | xxx |" << endl;
   // the above should be implemented as
   cout << "| ";
   cout.fill('x');
   cout.width(23);  // 20 + 3
   cout << " | ";
   cout.width(10);  // 7 + 3
   cout << " | ";
   cout.width(5);   // 3 + 2
   cout << " |" << endl;
```
## UD
### Unnecessary Dynamic Memory Allocation! 

Only do dynamic memory allocation when the length of data is unknown and has to be set during execution. If you know exactly what the length of data is and the length is reasonably small, just create an array. This is more efficient and faster. 
### Problematic code sample
```C++
struct Population {
	char* postalCode;
	int Number;
};
// Correct design
struct Population {
	char postalCode[4];  //(for a three letter postal code)
	int Number;
};
```


## NL
### Always set a pointer to null after the memory it is pointing to is deleted. (Unless it is not going to be used anymore; like when deleting in a destructor)
### Problematic code sample
```C++
    void deallocateMemory() {
        delete[] popZips;
    }
// correct way:
    void deallocateMemory() {
        delete[] popZips;
	popZips = nullptr;
    }

```
## RS
### When using a library function, do not assume how it works; instead, check the reference and research its behaviour before using it
### Problematic code sample
```C++
   bool read(char *m_postalCode) {
       return fscanf(fptr, "%[^,],", m_postalCode);
   }
```
The function above is written assuming fscanf returning a true value if successful. However, looking at the C reference we will find out that scanf returns the number of successful fields read OR EOF (that is -1) if it reaches the end of file. Therefore the function above will return -1 (that is non-zero and true) if it reaches the end of file.

This function works most of the time but sometimes when the last record is at the end of the file, the next read will return true even though the read was not successful.

Correct implentation of the above function would be: 
```C++
  bool read(char *m_postalCode) {
       return fscanf(fptr, "%[^,],", m_postalCode) == 1;
  }
```
## SM
### The code written could have been written in less code and with simpler logic
### Problematic code sample
```C++
    bool read(char* postalCode)
    {
        bool a = false;
        if (fscanf(fptr, "%[^,],", postalCode) == 1)
        {
            a = true;
        }
        return a;
    }
// the above could have been written as follows:
    bool read(char* postalCode)
    {
        return fscanf(fptr, "%[^,],", postalCode) == 1;
    }

```

## STRH
### Used &lt;cstring&gt; library to develop "cstring.h" string functions. The whole purpose of workshop 1 DIY was to re-create the functions of &lt;cstring&gt;. This violates the essence of the workshop.
### Problematic code sample
```C++
void strCat(char* des, const char* src)
{
	strcat(des, src);
}

```

## MR
### Feedback
you have multiple return statements in your functions. A function must have only one point of exit. (i.e one return statement) please make sure in your future coding there is only one return statement in a function.
### Problematic code sample
```C++
	bool CalorieList::add(const char* item_name, int calories, int when)
	{
		if (m_itemsAdded < m_noOfItems)
		{
			m_items[m_itemsAdded].set(item_name, calories, when);
			m_itemsAdded++;
			return true;
		}
		return false;
	}
```
## CM
### Feedback
Unnecessary comment or commented code is left in the the source code. Make sure all the unwanted comments and commented code are removed from the source code before submission. 
### Problematic code sample
```C++

        while (i < length && s1[i] != '\0' && s2[i] != '\0')
        {

            if (s1[i] > s2[i])
            {
                //cout << flag;
                flag = 1;
            }
            else if (s1[i] < s2[i])
            {
                flag = -1;
                //  cout << flag;
            }
            i++;
        }
  OR:
        if (...) //if successfully read one line
        {
             ...
        }

        /*    if reading of employee number, salay and name are successful   << These are workshop instructions, they must be removed at submission
                allocate memory to the size of the name + 1
                and keep its address in the name of the Employee Reference

                copy the name into the newly allocated memroy

                make sure the "ok" flag is set to true
           end if
        */

```


## IH
### Feedback
Only include a header file where it is being used. Never include a header file inside another header file unless absolutely necessary
### Problematic code sample
```C++

#ifndef SDDS_FILE_H
#define SDDS_FILE_H

#include <cstdio>   // << Not needed here!!!!!!!!!
#include"ShoppingRec.h"
namespace sdds {
	bool open();
	bool openWR();
	void close();
	bool fread(ShoppingRec* rec);
	void fwrite(const ShoppingRec* rec);
}
#endif

```

## BS
### Feedback
The format of the safeguard header file is as follows:<br />
```NAMESPACE_HEADERNAME_H_```
### Problematic code sample
```C++
// file.h header file
#ifndef FILE_H   // << the name sould be SDDS_FILE_H_
#define FILE_H
#include"ShoppingRec.h"
namespace sdds {
	bool open();
	bool openWR();
	void close();
	bool fread(ShoppingRec* rec);
	void fwrite(const ShoppingRec* rec);
}
#endif

// file.h header file
#ifndef NAMESPACE_FILE_H   // << the name sould be SDDS_FILE_H_
#define NAMESPACE_FILE_H
#include"ShoppingRec.h"
namespace sdds {
	bool open();
	bool openWR();
	void close();
	bool fread(ShoppingRec* rec);
	void fwrite(const ShoppingRec* rec);
}
#endif

```
## CA
### Feedback
All the custom headerfiles written by you must be inlucded after the library headerfiles
### Problematic code sample
```C++
#define _CRT_SECURE_NO_WARNINGS
#include "File.h"  << this line must come after #include <cstdio>
#include <cstdio>
namespace sdds
{

```
## BK
### Feedback
The **continue** statement should never be used and the **break** statement is only allowed in a switch statement.<br />
Never use **continue** or **break** statements in a loop to skip or end repetition.
### Problematic code sample
```C++
for (i=0; *str1 != 0; str1 += 1, i++) {
    if (*str1 != *b) {
	continue; << Never use continue
    }
    a = str1;
    while (1) {
	if (*b == 0) {
	    return (char*)str1;   << only one return statement in a function.
	}
	if (*a++ != *b++) {
	    break;  << never use break in a loop
	}
    }
    b = str2;
}

```
## RT
### Insufficient or Empty reflection
### Problematic code sample
Your reflect.txt file is either empty or does not contain sufficient content to be considered as your reflection on the deliverable work.
## SG
### The whole purpose of this workshop was to strengthen the use of pointers and understanding of C-strings. You are not allowed to use the C++ string object here.
### Problematic code sample
```C++
int strCmp(const char* s1, const char* s2) {
   string str_s1 = s1;  << use of C++ string class is not allowed in this workshop
   string str_s2 = s2; << use of C++ string class is not allowed in this workshop
   int compareValue = str_s1.compare(str_s2);
   return ompareValue;
}

```
## CRT
### `#define _CRT_SECURE_NO_WARNINGS` should be the first line in your .cpp file and never in a headerfile.
### Problematic code sample
```C++
#ifndef SDDS_SHOPPINGLIST_H
#define SDDS_SHOPPINGLIST_H

#define _CRT_SECURE_NO_WARNINGS << must be the first line in a cpp file and never in a header file!

namespace sdds
{
	const int MAX_NO_OF_RECS = 15;

	bool loadList();
	void displayList();
	void removeBoughtItems();
	void removeItem(int index);
	bool saveList();
	void clearList();
	void toggleBought();
	void addItemToList();
	void removeItemfromList();
	bool listIsEmpty();
}

#endif
```
## UN
### using namespace is never used where the namespace is being implemented
### Problematic code sample
```C++
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "File.h"

using namespace std;
using namespace sdds;  << in the next line the sdds namespace is being implemented, using it here does not mean anything!
namespace sdds
{
    FILE* sfptr = nullptr;
    bool openFileForRead()
    {
        sfptr = fopen(SHOPPING_DATA_FILE, "r");
        return sfptr != NULL;
    }
...
}

```
## CT
### Signature and Citation at the top of the files are missing.
### Problematic code sample
Every file that you submit must contain (as a comment) at the top.<br />
**your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

If the file contains only your work or work provided to you by your professor, add the following message as a comment at the top of the file:

> I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which part of the assignment is given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.

If any of these citations are missing, the work is considered not to be yours and will receive a mark of zero.
## RC
### Your functions are over completcated because you are not reusing the your other functions in your code
### Problematic code sample
This could be done much simpler if strnCmp was called in the while loop!!!
```C++
const char* strStr(const char* str1, const char* str2)
{
	int change = 0;
	int i;
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
		{
			str2++;
			change++;
		}
		else if (change > 0)
		{
			for (i = 0; i < change; i++)
			{
				str2--;
			}
			change = 0;
		}
		str1++;
	}
	if (*str2 == '\0') return str1 - change;
	else return nullptr;
}

```
## CV
### If the constant values are part of the implementation of the function in a namespace, they too must reside inside the namespace
### Problematic code sample
```C++
#ifndef SDDS_SHOPPINGREC_H
#define SDDS_SHOPPINGREC_H
const int MAX_QUANTITY_VALUE = 50;  << these constant values belong in the sdds namespace
const int MAX_TITLE_LENGTH = 50;    <<<

namespace sdds {

	struct ShoppingRec {
		char m_title[MAX_TITLE_LENGTH + 1];
		int m_quantity;
		bool m_bought;
	};

	ShoppingRec getShoppingRec();
	void displayShoppingRec(const ShoppingRec* shp);
	void toggleBoughtFlag(ShoppingRec* rec);
	bool isShoppingRecEmpty(const ShoppingRec* shp);

}

#endif
```
## SPAM
### Too many submissions of the same deliverable
### Problematic code sample
Submit a deliverable again only if there is a code improvement. Avoid "just in case" submissions. This will clutter the email system and act like spam.
## IN
### Bad indentation or inconsistent coding style. All indentations and code formatting must be consistent throughout your program. 
If your program looks ok in your IDE but when moving the file to another platform, it gets scrambled, most likely, it is because your IDE uses the tab character '\t' in its editor. <br />
All IDEs have the option of replacing the tab character with spaces. 
See what tab size you like for coding (usually 3 is good) and set your IDE to replace the tab character with spaces.<br />
This should fix the problem.

### Problematic code sample
```C++
bool openFile(const char filename[])
{
fptr = fopen(filename, "r");
return fptr != NULL;
}
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) 
      {
         noOfRecs += (ch == '\n');}
      rewind(fptr);
      return noOfRecs
}
 void closeFile() { if (fptr) fclose(fptr); }
 
 /*  the above code should be corrected to something like the following;
 *   Note that you don't have to exactly follow this style, but rather have
 *   a consistent style.
 */
bool openFile(const char filename[]){
   fptr = fopen(filename, "r");
   return fptr != NULL;
}
int noOfRecords() {
   int noOfRecs = 0;
   char ch;
   while (fscanf(fptr, "%c", &ch) == 1){
      noOfRecs += (ch == '\n');
   }
   rewind(fptr);
   return noOfRecs
}
 
```
## TMP
### Unnecessary temporary variables are created in functions.  
### Problematic code sample
```C++
    bool read(int& A) {
        bool success = (scanf("%d",&A) == 1);
        return success;
    }
    // the function above does not need a temp variable called success, it can be written as follows
    bool read(int& A) {
        return scanf("%d",&A) == 1;
    }
    
```
## RD
### Unnecessary or redundant logic used in code.
### Problematic code sample
```C++
  bool read(int& A) {
        bool success;
	if(scanf("%d",&A) == 1){
	   success = true;
	}
	else{
	   sucess = false;
	}
        return success;
    }
    // the function above does not need an if statement, it can be written as follows
    bool read(int& A) {
        return scanf("%d",&A) == 1;
    }
```
## Code
### Feedback
### Problematic code sample
```C++
```

