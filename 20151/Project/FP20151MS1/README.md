# Final Project Milestone 1, 20151
[For Milestone 2: the Streamable Class, go here!](https://github.com/Seneca-OOP244/FP20151MS2)
# Aid Management Application
When disaster hits an area, the most important thing is to be able to provide them with what they need as quickly and as efficiently possible.<br />
Your job for this project is to prepare an application that manages the list of goods needed to be shipped to the area. Also the application should be able to keep track of the quantity of the items needed and quantity in hand and storing them in file for future use.<br />
The types of goods needed to be shipped in this situation is divided into two categories; 
* NFI: NFI, or Non-Food Items are those with no expiry date
* Perishable: Perishable items are those with expiry date, like food and medicine, such as blankets, buckets, mosquito nets, and tents. <br />
To accomplish this task we need to create several classes to encapsulate the problem and provide a solution for this application. <br />

## The classes needed for this application are:
### Date
A class to be used to keep the expiry date of the perishable items. 

### Streamable
 This interface, (a class with “only” pure virtual functions) enforces the inherited classes to be streamable. This means, any classes inherited from “Streamable” can be written to or read from console, or be saved into or loaded from a text file.<br />   
Using this class the list of items can be saved into a file and retrieved later and also individual item specifications could be displayed on screen or read from keyboard. 
### Item
A class inherited form Streamable, containing general information about an item, like the name, UPC code, price and etc.
### NFI
A class for Non-food items that is inherited from the Item class and implements the requirements of the Streamable class (i.e. implements the pure virtual methods of the Streamable class)

### Perishable
A class in inherited from the Item class which implements the requirements of the Streamable class and also provides expiry date and unit of measurement for Perishable items.
### AidApp
The main application class that is essentially the manager class for the NFI and Perishable items. This class provides the user with a user-interface to list, add and update the items saved in a data file.
## Project Development Process
The Development process of the project is divided into 5 milestones and therefore five deliverables, close to due date of each deliverable a tester program will be published to test your deliverables before submission. <br />
1- The Date class.   <br />
2- The Streamable class  <br />
3- The Item class <br />
4- The NFI and Perishable classes  <br />
5- The AidApp class.   <br />
For more details on submission due dates and "how to"s, see submission section at the end if this document.
## File Structure of the project:
Each class will have its own header file and cpp file.  The name of these files should be the same as the class name. <br />
In addition to header-files for each class, create a header-file called “general.h” that will hold the general defined values for the project, such as:<br />
<pre>
TAX (0.13)             The tax value for the NFI items
MAX_UPC_LEN (7)        The maximum length of item UPC

MIN_YEAR (2000)        min and max for year to be used for date validation
MAX_YEAR (2030)

MAX_NO_RECS (2000)     maximum number of records in the data file. 
</pre>
This header file should get included were these values are needed. <br />
Note that all the code developed for this application should be in oop244 namespace. <br />

#Milestone 1: the Date class
Date class encapsulates a date value in three integers for year, month and day and is readable by istream and printable by ostream using the following format for both reading and writing.
<pre>
YYYY/MM/DD
</pre>
Complete the implementation of Date class using following information:
##Member Data:
### int _year;   
Holds the year; a four digit integer between MIN_YEAR and MAX_YEAR, which are defined in “general.h”
### int _mon;
Month of the year, between 1 to 12
### int _day;
Day of the month, note that in a leap year February is 29 days, (see mday() member function) 
### int _readErrorCode;
This variable is going to hold an error code with which the caller program can find out if the date value is valid or not. And also can find out which part is erroneous.<br />
## defined values
These values should be defined in date header-file as follows:
<pre>
NO_ERROR   0  -- No error the date is valid
CIN_FAILED 1  -- istream failed when entering information
YEAR_ERROR 2  -- Year value is invalid
MON_ERROR  3  -- Month value is invalid
DAY_ERROR  4  -- Day value is invalid
</pre>
##Private Member functions:
###int value()const; 
***(this function is already implemented and provided)***<br />
This function returns a unique integer number based on the date. This value it used to compare two dates. (If value() of a date is larger than another, then the date is larger than the other too). 
###void errCode(int errorCode);
Sets the _readErrorCode member-variable to one of the values mentioned above.

##Constructors:
### No argument constructor: (default)
Sets _year, _mon and _day to zero and _readErrorCode to NO_ERROR. 
###Regular constructor
Accepts three arguments to set the values of _year, _mon and _day attributes. It also sets the _readErrorCode to NO_ERROR.
##Public member-functions and operators
###Comparison Logical operator overloads: 
<pre>
bool operator==(const Date& D)const;
bool operator!=(const Date& D)const;
bool operator&lt;(const Date& D)const;
bool operator&gt;(const Date& D)const;
bool operator&lt;=(const Date& D)const;
bool operator&gt;=(const Date& D)const;
</pre>
These operators return the comparison result of the return value of the value() function in Left and right operands (The Date objects at left and right side of the operators).<br />
For example '''operator<''' return true if this->value() is less than D.value() or else it returns false.<br /> 
###int mdays()const; 
***(this function is already implemented and provided)***<br />
Returns number of days in the current month or -1 if current month is invalid (currnet month: month value in _mon) 

##Accessor or getter member functions:
###int errCode()const;
	Returns the _readErrorCode value.
###bool bad()const;   
	Returns true if _readErrorCode is not equal zero. 
##IO member-funtions
###std::istream& read(std::istream& istr);
Reads the date in following format: YYYY/MM/DD (i.e 2015/03/24) from the console. This function will not prompt anything. If istream (istr) fails at any point, it will set the _readErrorCode to CIN_FAILED and will NOT clear the istream object.<br />
if the istr is successful in reading the numbers, it will validate them to be in range in the order of year, mon and then day.(see general header-file and mday() method for acceptable ranges for years and days respectively. Month can be between 1 and 12 inclusive). If any of the numbers is not in range, it will set the _readErrorCode to proper error code and stop further validation. <br />
No matter what the result of the process is, it will return the incoming istr argument. <br />
**As an option you can do the validation for the values of _year, _mon and _day in a separate private function called validate() and call that function inside the read() function. By doing this the validation logic will be separated from your data entry logic and your class will be more modular. **
###std::ostream& write(std::ostream& ostr)const;
Writes the date using the ostr argument in the following format and returns the ostr: YYYY/MM/DD
##Non-member IO operator overloads:
After implementing the Date class, overload operator<< and operator>> to work with cout to print a Date and cin to Read a Date form console respectively. <br />
use the member read and write methods and DO NOT use friends for these operator overloads. <br />
Make sure the prototype of the functions are in date.h.<br />
To kick start the first milestone you can download the Visual studio project for milestone 1 from here by clicking on '''Download Zip''' or if you know how to work with '''git''' clone this reposotory
# Submission

Refer to your professor’s instructions for submission.
## Sections E and F:
### Submission Script for Milestone one
1- First upload Date.cpp, Date.h, general.h and ms1.cpp to your matrix account
2- Compile them and make sure the program runs properly 
<pre>
$ g++ -Wall ms1.cpp Date.cpp <ENTER>
$ a.out
</pre>
3- run the following script and follow the instructions to submit milestone 1:
<pre>
$ ~fardad.soleimanloo/submit_ms1 <ENTER>
</pre>
### Due Date  Thursday April 2nd 23:59
