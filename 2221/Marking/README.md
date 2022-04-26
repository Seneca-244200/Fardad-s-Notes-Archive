# Feedback and coding problems that can effect your mark in workshops and project.
The following are the feedbacks given to students as the workshops are marked. You are responsible to study these and make sure your code does not contain problems as are shown here. <br />
Since the feedbacks are given on each workshop you will not lose any marks on the same workshop the feedback is given to. However, you may lose marks if you make the same mistake in later workshops and the project. <br />
**Add this page to your "watched" pages on Github to receive notifications if any new feedback is issued.**

## List
|Code|Problem|
|---|----|
|[BK](#bk) |  Use of break or continue statements in a loop |
|[CA](#ca) |  Custom header files must be included after library header files|
|[CH](#ch) | C header file included in a C++ program |
|[CM](#cm)  |  Unnecessary comments or Commented code left in the release version |
|[CRT](#crt) |  `#define _CRT_SECURE_NO_WARNINGS` should be the first line in your .cpp file and never in a header file|
|[CS2](#cs2)| Statically allocated cStrings (char arrays) are unnecessarily too big |
|[CSL](#csl)| Statically allocated cStrings need one extra character for null byte |
|[CSG](#sgs) |  Header file compilation safeguards must surround everything in the header file|
|[CSGN](#bs) |  Bad header file safeguard define names| 
[CTO](#cto)| Incorrect use of Conditional (Ternary) Operator (?:) |
|[CT](#ct)|  Signature or citation missing |
|[CV](#cv)|  Relative constant values should reside inside the namespace |
|[DL](#dl) | Type of delete should match the allocation type |
|[DC](#dc) | Using #define statement instead of creating constant values |
|[DLIF](#dlif) | A pointer does not need to be checked for being null before deletion  |
|[DMA](#dma) | Bad logic for dynamic memory allocation or resizing memory |
|[DV](#dv) | Missing default value for the argument of a function |
|[FN](#fn) |  Always pack repeated logic in your class into a private function |
|[FR](#fr) |  For filler repetition and formatting use width and fill |
|[FRD](#frd)| Friend helper functions used instead of creating queries and calling them in the helper functions|
|[HCODE](#hcode) |  Function implementation code in header file | 
|[IH](#ih) |  Unneeded header file included in another header file| 
|[IN](#in) |  Sloppy formatting, bad or inconsistent indentation in the code  |
|[IOS](#ios)|  #include&lt;iotstream&gt; already includes &lt;ostream&gt; |
|[LS](#ls) | Late Submission |
|[MR](#mr)  |  Unnecessary multiple return statements or exit function used|
|[MP](#mp) | The whole module is written is only with one or two functions |
|[MVP](#mvp) | The member vairable prefix was used incorrectly |
|[NL](#nl) |  Always set a pointer to null after the memory it is pointing to is deleted|
|[NODMA](#nodma)| Statically allocated memory was used where dynamic memory allocation should have been used|
|[RD](#rd) |  Unnecessary or redundant logic used in code. |
|[RF](#rf) |  Insufficient or Empty reflection |
|[RS](#rs) |  Research the behaviour of the functions used instead of assuming what they do |
|[REUSE](#reuse) |  Reuse the code and logic that are already implemented in your functions |
|[SM](#sm) |  The code could have been written much shorter in length and simpler |
|[SPAM](#spam)|  Too many submissions |
|[TL](#tl)| Use of library functions instead of the Tools provided |
|[TN](#tn)| Compound Type definitions should reside inside the namespace|
|[TMP](#tmp) |  Unnecessary temporary variables used in the functions. |
|[UD](#ud) |  Unnecessary DMA |
|[UN](#un) |  `using namespace` is never used where the namespace is being implemented |
|[UNH](#unh) |  `using namespace` is never used in a header file |
|[US](#us) | Improper use of the statement **"using"** |


# Coding Feedback


<!-- 
## Code
### Feedback
### Problematic code sample
```C++

```
### The Fix
```C++

```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
-->

## FRD
### Feedback 
Friend helper functions used instead of using queries and calling them in the helper functions<br />
Use of friend functions should be avoided at all times if possible.
### Problematic code sample
```C++
   class HealthCard {
      ...

   public:
      ...
      std::ostream& print(std::ostream& ostr, bool toFile = true) const;
      std::istream& read(std::istream& istr);
      friend std::ostream& operator<<(std::ostream& ostr, const HealthCard& hc);
      friend std::istream& operator>>(std::istream& istr, HealthCard& hc);
   };
   std::ostream& operator<<(std::ostream& ostr, const HealthCard& hc)
   {      
      if (hc.validID(hc.m_name, hc.m_number, hc.m_vCode, hc.m_sNumber)) { 
         hc.print(ostr, false);
      }
      else     
         cout << "Invalid Health Card Record";
      return ostr;
   }
   std::istream& operator>>(std::istream& istr, HealthCard& hc)
   {
      return hc.read(istr);
   }
```
### The Fix
```C++
   class HealthCard {
      ...
   public:
      ...
      std::ostream& print(std::ostream& ostr, bool toFile = true) const;
      std::istream& read(std::istream& istr);
   };
   std::ostream& operator<<(std::ostream& ostr, const HealthCard& hc);
   std::istream& operator>>(std::istream& istr, HealthCard& hc);
   std::ostream& operator<<(std::ostream& ostr, const HealthCard& hc)
   {      
      if (hc)
         hc.print(ostr, false);
      else                                                                            
         cout << "Invalid Health Card Record";
      return ostr;
   }
   std::istream& operator>>(std::istream& istr, HealthCard& hc)
   {
      return hc.read(istr);
   }
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## MVP
### Feedback
The member variable prefix was used incorrectly; As a coding policy, in OOP244 we add an "m_" to the beginning of all member variables of a class. This is to be able to quickly recognize member variables in code and separate them from regular temporary variables in methods. 
### Problematic code sample
```C++
    class Train
    {
    private:

        char t_name[MAX_NAME_LEN];
        int T_number;
        double r_speed;

    public:
	...
    };

```
### The Fix
```C++
    class Train
    {
    private:

        char m_name[MAX_NAME_LEN];
        int m_number;
        double m_speed;

    public:
       ...
   };


```
------------------------------------
[Back to Feedback List](#list)
------------------------------------


## NODMA
### Feedback
Statically allocated memory was used where dynamic memory allocation should have been used
### Problematic code sample
```C++
	struct DNA {
		int dnaid;
		char dnastr[1000];
	};

```
### The Fix
```C++
	struct DNA {
		int dnaid;
		char* dnastr;
	};

```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## dc
### Feedback
As mentioned in class global const values are preferred to #define statements
### Problematic code sample
```C++
#define LICENCEPLATE 9
#define MAKENDMODEL 60
```
### The Fix
```C++
const int LICENCEPLATE = 9;
const int MAKENDMODEL = 60;
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CSL
### Feedback
Statically allocated cStrings need one extra character for null byte. 
### Problematic code sample
```C++
char area[3];
char prefix[3];
char number[4];

```
### The Fix
```C++
//416 555 1234
//area 3 chars + 1
//prefix 3 chars + 1
//number 4 chars + 1
char area[4];
char prefix[4];
char number[5];

```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CS2
### Feedback
You have created character strings (null terminated character arrays) that are much to big for the amount of data they need to hold. This will waste lots of memory.
### Problematic code sample
```C++
	struct Phone
	{
		char name[51];
		char area[51];
		char prefix[51];
		char number[51];
	};

```
### The Fix
```C++
	struct Phone
	{
		char name[51];
		char area[4];
		char prefix[4];
		char number[5];
	};
****
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## US
### Feedback
Although the statement **using** can be used this way, but it is advised against the time until you understand exactly when and were you should use the statement **using** this way.
### Problematic code sample
```C++
	using std::cout;
	using std::endl;
	using std::end;
	using std::setw;
	using std::left;
	using std::right;

```
### The Fix
```C++
   using namespace std;
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## DV
### Feedback
In the description of the assignment you were asked to provide default value for an argument of a function but that default value is missing:
### Problematic code sample
```C++
namespace sdds {
    ....
	void read(char* cString, unsigned int maxSize, char delimiter);
	....
}

```
### The Fix
```C++
namespace sdds {
    ....
	void read(char* cString, unsigned int maxSize, char delimiter='\n');
	....
}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## TL
### Feedback
Use of library functions instead of the Tools provided.<br />
The whole purpose of including cStrTool.h (C String Tools) was not to use string header file or ctype header file. This show that you do not review the code you are using. 
### Problematic code sample
```C++
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <ctype.h> << WHY?
#include <string.h>  << WHY?
#include "cStrTools.h"  <<<<---------------------
#include "Phone.h"

using namespace std;

```
### The Fix
```C++
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include "cStrTools.h"  
#include "Phone.h"

using namespace std;
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CH
### Feedback
C header file included in a C++ program 
### Problematic code sample
```C++
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <string.h>
#include "cStrTools.h"
#include "Phone.h"

using namespace std;

```
### The Fix
```C++
#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstring>
#include "cStrTools.h"
#include "Phone.h"

using namespace std;

```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## TN
### Feedback
Compound Type definitions should reside inside the namespace
### Problematic code sample
```C++using namespace std;
struct Word {
	char letters[MAX_WORD_LEN];
	int count;
};
namespace sdds {
    int searchWords(const Word words[], int num, const char word[]);
    int readWord(char* word, FILE* fptr, int maxLen);
    void addWord(Word words[], int* index, const char newWord[]);
    ...
    ...
    ...
```
### The Fix
```C++
namespace sdds {
    struct Word {
    	char letters[MAX_WORD_LEN];
    	int count;
    };
    int searchWords(const Word words[], int num, const char word[]);
    int readWord(char* word, FILE* fptr, int maxLen);
    void addWord(Word words[], int* index, const char newWord[]);
    ...
    ...
    ...
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## LS
### Feedback
#### The submission is late and may be subject to penalty 

------------------------------------
[Back to Feedback List](#list)
------------------------------------
## MP
Modular Programming!
### Feedback
The whole module is written is only with one or two functions.<br />
Learning from IPC144 you should break down the problem into multiple task (functions). Implementing the entire application in only one function shows that you can not break down the problem into smaller pieces.
### Problematic code sample
```C++
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "Phone.h"
#include "cStrTools.h"

using namespace std;
namespace sdds
{
    void phoneDir(const char* programTitle, const char* fileName)
    {
       //....
       //....
       //....
    }

}
```
### The Fix
```C++
// this is just an example of how the module could have been designed....
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "Phone.h"
#include "cStrTools.h"

using namespace std;
namespace sdds
{
   int readPhone(std::FILE* fptr, Phone* ph) {

   }
   int nameCheck(const Phone* p, const char* find) {

   }
   void displayPhoneRec(const Phone* ph) {

   }
   void nameSearch(std::FILE* fptr, const char* name) {

   }
   void phoneDir(const char* title, const char* fname) {

   }
}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## DLIF
### Feedback
A pointer does not need to be checked for being null before deletion. This logic is already implemented within the logic of the delete statement.
### Problematic code sample
```C++
    void Book::set(char const *title, char const *author, int noOfBookCases, int noOfShelves) {
        if (m_title != nullptr) {  
            delete[] m_title;
        }
        if (m_author != nullptr) {
            delete[] m_author;
        }
        ......
        ......
    }

```
### The Fix
```C++
    void Book::set(char const *title, char const *author, int noOfBookCases, int noOfShelves) {
        delete[] m_title;
        delete[] m_author;
        ......
        ......
    }
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## REUSE
### Feedback
Reuse the code and logic that are already implemented in your functions instead of rewriting them over and over 
### Problematic code sample
```C++
    bool Contact::allocateAndCopy(const char* name) {
        bool success = false;
        if (name && name[0])
        {
            delete[] m_name;
            m_name = new char[strlen(name) + 1];
            strcpy(m_name, name);
            success = true;
        }
        return success;
    }
   void Contact::set(const char* name, int areaCode, int exchangeCode, int number) {
        if (name && name[0] && validPhone(areaCode, exchangeCode, number))
        {
            delete[] m_name;
            m_name = new char[strlen(name) + 1];
            strcpy(m_name, name);
            m_area = areaCode;
            m_exchangeCode = exchangeCode;
            m_number = number;
        }
        else setEmpty();
    }

```
### The Fix
```C++
    bool Contact::allocateAndCopy(const char* name) {
        bool success = false;
        if (name && name[0])
        {
            delete[] m_name;
            m_name = new char[strlen(name) + 1];
            strcpy(m_name, name);
            success = true;
        }
        return success;
    }
   void Contact::set(const char* name, int areaCode, int exchangeCode, int number) {
        if (validPhone(areaCode, exchangeCode, number) && allocateAndCopy(name))
        {
            m_area = areaCode;
            m_exchangeCode = exchangeCode;
            m_number = number;
        }
        else setEmpty();
    }

```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## DL
### Feedback
If you allocated the memory as an array, you must delete as `delete[] ptr;` and if you allocated the memroy as a single object, then you must delete as `delete ptr;`
### Problematic code sample
```C++
	void Book::set(const char* title,const char* name, int book, int shelf)
	{
		if (title[0]!='\0'&&name[0]!='\0')
		{
		   ....
		}
		else
		{
		    ....
  			delete m_title;   // << m_title is a dynamic character array
  			.....
		}
	}
```
### The Fix
```C++
	void Book::set(const char* title,const char* name, int book, int shelf)
	{
		if (title[0]!='\0'&&name[0]!='\0')
		{
		   ....
		}
		else
		{
		    ....
  			delete[] m_title;   // << m_title is a dynamic character array therefore delete[]
  			.....
		}
	}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## HCODE
### Feedback
You have member function implementation in the header file, All implementation of methods must be in the CPP file. A header file is to only enclose the declaration of a class or function and not their definition.
### Problematic code sample
```C++
	class Bus
	{
	private:
        ...
        ...
        ...
	public:

		Bus(int Seats = 20, int Passengers = 0)
		{
			if ((Seats % 2 == 0) && Seats >= 10 && Seats <= 40 && Passengers >= 0 && Passengers <= Seats)
			{
				numberOfSeats = Seats;
				numberOfPassengers = Passengers;
			}
			else
				setBroken();
		}

		ostream& display(std::ostream& ostr) const;
		istream& read(std::istream& istr);
		...
		...
		...
	};

```
### The Fix
```C++
// Bus.h
	class Bus
	{
	private:
        ...
        ...
        ...
	public:

		Bus(int Seats = 20, int Passengers = 0);
		ostream& display(std::ostream& ostr) const;
		istream& read(std::istream& istr);
		...
		...
		...
	};
// Bus.cpp
#include "Bus.h"
Bus::Buss(int Seats, int Passengers)
	{
		if ((Seats % 2 == 0) && Seats >= 10 && Seats <= 40 && Passengers >= 0 && Passengers <= Seats)
		{
			numberOfSeats = Seats;
			numberOfPassengers = Passengers;
		}
		else
			setBroken();
	}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CTO
### Feedback
Incorrect use of Conditional (Ternary) Operator (?:)
### Problematic code sample
```C++
	Bus::operator double() const {
		double res;
		(bool)*this ? res = m_passengers * TicketPrice : res = -1.0;
		return res;
	}
```
### The Fix
```C++
	Bus::operator double() const { // assuming (*this) has bool conversion opererator overloaded.
		return *this ? m_passengers * TicketPrice : -1.0
	}

```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## DMA
### Bad logic for dynamic memory allocation or resizing memory
### Problematic code sample
```C++
	Book& Book::addChapter(const char* chapter_name, int noOfPages){
		if (chapter_name != nullptr && noOfPages > 0 && noOfPages <= MAX_CHAPTERPAGE) {
			int size = this->m_noOfChapters + 1;
			Chapter* temp = new Chapter[size];
			for (int i = 0; i < m_noOfChapters; i++) {
				temp[i] = this->m_arrayOfChapters[i];
			}
			temp[m_noOfChapters] = Chapter(chapter_name, noOfPages);

			delete[] this->m_arrayOfChapters;
			this->m_arrayOfChapters = nullptr;
			this->m_arrayOfChapters = new Chapter[size]; // << the memroy is already resized in temp 
			
			for (int i = 0; i < size; i++) {
				this->m_arrayOfChapters[i] = temp[i];
			}			
			this->m_noOfChapters++;
			delete[] temp;
		}
		return *this;
	}

```
### The Fix
```C++
	Book& Book::addChapter(const char* chapter_name, int noOfPages){
		if (chapter_name != nullptr && noOfPages > 0 && noOfPages <= MAX_CHAPTERPAGE) {
			int size = this->m_noOfChapters + 1;
			Chapter* temp = new Chapter[size];
			for (int i = 0; i < m_noOfChapters; i++) {
				temp[i] = this->m_arrayOfChapters[i];
			}
			temp[m_noOfChapters] = Chapter(chapter_name, noOfPages);

			delete[] this->m_arrayOfChapters;
			this->m_arrayOfChapters = temp;
		}
		return *this;
	}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## FN
### Feedback
**Always pack repeated logic in your class into a private function.**

During the development of the methods of a class, if you notice a specific logic is being repeated. Pack the logic into a private function and call the function instead.
### Problematic code sample
```C++
	void Book::allocateAndCopy(const char* BookTitle, const char* AuthorName) {
		delete[] m_BookTitle;   // << repeated logic
		delete[] m_AuthorName;
		....
	}
	void Book::set(const char* BookTitle, const char* AuthorName, int BookcaseNumber, int ShelfNumber) {

		if (isValid(BookTitle, AuthorName, BookcaseNumber, ShelfNumber)) {
		  ....
		}
		else {
			delete[] m_BookTitle;  // << repeated logic
			delete[] m_AuthorName;
			....
		}
	}
	Book::~Book() {
		delete[] m_BookTitle; // << repeated logic
		delete[] m_AuthorName;
	}

```
### The Fix
```C++
    void Book::freeMem(){
		delete[] m_BookTitle;   // << repeated logic
		delete[] m_AuthorName;
    }
	void Book::allocateAndCopy(const char* BookTitle, const char* AuthorName) {
	    freeMem();
		....
	}
	void Book::set(const char* BookTitle, const char* AuthorName, int BookcaseNumber, int ShelfNumber) {

		if (isValid(BookTitle, AuthorName, BookcaseNumber, ShelfNumber)) {
		    ....
		}
		else {
    	    freeMem();
		    ....
		}
	}
	Book::~Book() {
	    freeMem();
	}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## SGS
### Feedback 
Header file compilation safeguards must surround everything in the header file
### Problematic code sample
```C++
#include "Chapter.h"  // << must come after the safeguards
#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H
namespace sdds
{
	class Book
	{
	....
	public:
	.....
	};
}

#endif
```
### The Fix
```C++
#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H
#include "Chapter.h"  // << correct place 
namespace sdds
{
	class Book
	{
	....
	public:
	.....
	};
}

#endif
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## UNH
### Feedback
`Using namespace` can only be used in CPP files and never in .H files. Instead of `using namespace` qualify each class by adding the namespace before the class name and a scope resolution.
### Problematic code sample
```C++
#ifndef SDDS_BUS_H
#define SDDS_BUS_H
#include <iostream>
using namespace std;  << ---- Not allowd
namespace sdds {
   class Bus {
        ...
   public: 
       istream& read(istream& istr);
       ostream& display(ostream& ostr);
       ...
   };
   istream& operator>>(istream& istr, Bus& right);
   ostream& operator<<(ostream& istr, Bus& right);
}
#endif
```
### The Fix
```C++
#ifndef SDDS_BUS_H
#define SDDS_BUS_H
#include <iostream>
namespace sdds {
   class Bus {
        ...
   public: 
       std::istream& read(std::istream& istr);
       std::ostream& display(std::ostream& ostr);
       ...
   };
   std::istream& operator>>(std::istream& istr, Bus& right);
   std::ostream& operator<<(std::ostream& istr, Bus& right);
}
#endif
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## IOS
### Feedback
If iostream is included, there is no need to include ostream;  #include&lt;iotstream&gt; already includes both &lt;ostream&gt; and &lt;istream&gt;
### Problematic code sample
```C++
#include <iostream>
#include <ostream> // remove this line
```
### The Fix
```C++
#include <iostream>
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## FR
### Feedback
For filler repetition and formatting use width and fill and avoid hard coding the output
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## UD
### Feedback
**Unnecessary Dynamic Memory Allocation! **

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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## NL
### Feedback
Always set a pointer to null after the memory it is pointing to is deleted. (Unless it is not going to be used anymore; like when deleting in a destructor)
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## RS
### Feedback
When using a library function, do not assume how it works; instead, check the reference and research its behaviour before using it
### Problematic code sample
```C++
   bool read(char *m_postalCode) {
       return fscanf(fptr, "%[^,],", m_postalCode);
   }
```
The function above is written assuming fscanf returning a true value if successful. However, looking at the C reference we will find out that scanf returns the number of successful fields read OR EOF (that is -1) if it reaches the end of file. Therefore the function above will return -1 (that is non-zero and true) if it reaches the end of file.

This function works most of the time but sometimes when the last record is at the end of the file, the next read will return true even though the read was not successful.

Correct implantation of the above function would be: 
```C++
  bool read(char *m_postalCode) {
       return fscanf(fptr, "%[^,],", m_postalCode) == 1;
  }
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## SM
### Feedback
The code written could have been written in less code and with simpler logic
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
#### example 2:
```C++
    if (interestOnly) {
        cout << "INTEREST ONLY LIST!" << endl;
        header();
    }
    else {
        header();
    }
```
#### The Fix
```C++
    if (interestOnly) {
        cout << "INTEREST ONLY LIST!" << endl;
    }
    header();
```
#### example 3:
```C++
   	if (name != nullptr && name[0] != '\0')
	{
		delete[] m_name; 
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
	}
	else
	{
		delete[] m_name; 
		setEmpty();
	}
```
#### The Fix
```C++
	delete[] m_name; 
   	if (name != nullptr && name[0] != '\0')
	{
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
	}
	else
	{
		setEmpty();
	}

```
#### example 4:
```C++
    bool Train::isSafeEmpty()
    {
        bool value = true;
        if (strcmp("Empty Express", t_name) == 0 && r_speed == 0 && T_number == 0)
        {
            value = true;
        } 
        else
        {
            value = false;
        }

        return value;
    }

```
#### The Fix
```C++
    bool Train::isSafeEmpty()
    {
        return (strcmp("Empty Express", t_name) == 0 && r_speed == 0 && T_number == 0);
    }
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## MR
### Feedback
you have multiple return statements in your functions or used the exit function. A function must have only one point of exit. (i.e one return statement) please make sure in your future coding there is only one return statement in a function.
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
	
	OR:
	if(fp == NULL){
		cout<<fileName<<" file not found!"<<endl;
		cout<<"Thank you for using "<<title<<" directory."<<endl;
		exit(1);
	}

	 
```
### The Fix
```C++
	bool CalorieList::add(const char* item_name, int calories, int when)
	{   
	    bool res = false;
		if (m_itemsAdded < m_noOfItems)
		{
			m_items[m_itemsAdded].set(item_name, calories, when);
			m_itemsAdded++;
			res = true;
		}
		return res;
	}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
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

------------------------------------
[Back to Feedback List](#list)
------------------------------------
## BS
### Feedback
The format of the safeguard header file is as follows:<br />
```NAMESPACE_HEADERNAME_H_```
And they are all capitol letters.
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## RF
### Feedback
Insufficient or Empty reflection
### Problematic code sample
Your reflect.txt file is either empty or does not contain sufficient content to be considered as your reflection on the deliverable work.

------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CRT
### Feedback
`#define _CRT_SECURE_NO_WARNINGS` should be the first line in your .cpp file and never in a headerfile.
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CT
### Feedback
Signature and Citation at the top of the files are missing or is not acurate.
### The Fix

Every file that you submit must contain (as a comment) at the top:<br />
**your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

#### For work that is done entirely by you (ONLY YOU)

If the file contains only your work or the work provided to you by your professor, add the following message as a comment at the top of the file:

> I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#### For work that is done partially by you.

If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which part of the assignment is given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.

> - Add the citation to the file in which you have the borrowed code
> - In the 'reflect.txt` submission of part 2 (DIY), add exactly what is added to which file and from where (or whom).

> :warning: This Submission Policy applies to the workshops. All other assessments in this subject have their own submission policies.

#### If you have helped someone with your code

If you have helped someone with your code. Let them know of these regulations and in your 'reflect.txt' of part 2 (DIY), write exactly which part of your code was copied and who was the recipient of this code.<br />By doing this you will be clear of any wrongdoing if the recipient of the code does not honour these regulations.

------------------------------------
[Back to Feedback List](#list)
------------------------------------
## CV
### Feedback
If the constant values are part of the implementation of the function in a namespace, they too must reside inside the namespace
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## SPAM
### Feedback
Too many submissions of the same deliverable
### Problematic code sample

Submit a deliverable again only if there is a code improvement. You can as many submissions as you need as long as something is changed or improved or debugged in the code. In comments at the top of the repeated submission indicate what is changed and increase the number of revisions. 
  
Also briefly explain what was the need for re-submission in reflect.txt.

> Remember is OK and good that you have multiple submission ONLY IF it is because you need to improve your code.

Avoid "just in case" submissions. This will clutter the email system, act like spam and attracts a penalty. 

------------------------------------
[Back to Feedback List](#list)
------------------------------------
## IN
### Feedback
**Bad indentation or inconsistent coding style. All indentations and code formatting must be consistent throughout your program.**

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
void closeFile(){ 
   if (fptr) fclose(fptr); 
}
 
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## TMP
### Feedback
Unnecessary temporary variables are created in functions.  
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
------------------------------------
[Back to Feedback List](#list)
------------------------------------

## RD
### Feedback
Unnecessary or redundant logic used in code.
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
#### Another example
```C++
	Book::Book(const char* name, int chapterPages, const Chapter* chapters) {
		setEmpty();
		.....
		if (name != nullptr && strlen(name) > 0 && 0 < chapterPages && chapters != nullptr && flag == 0){
		   ......
		}
		else {
			setEmpty(); // << -- this is not needed since object is set to empty before
		}
	}

```
#### The Fix
```C++
	Book::Book(const char* name, int chapterPages, const Chapter* chapters) {
		.....
		if (name != nullptr && strlen(name) > 0 && 0 < chapterPages && chapters != nullptr && flag == 0){
		   ......
		}
	}
```
------------------------------------
[Back to Feedback List](#list)
------------------------------------
<!-- 
## Code
### Feedback
### Problematic code sample
```C++
```
### The Fix
```C++
```
------------------------------------
[Back to Feedback List](#list)
-->
