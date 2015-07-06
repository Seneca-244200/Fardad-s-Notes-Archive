[For Milestone 5 go here](https://github.com/Seneca-OOP244/FP20151MS5)
#Final project Milestone 4, 20151 
Before starting this, please download the files provided. Then add all the classes you implemented in previous milestones and then to bigin, look at the code for ErrorMessage class:<br /><br /> 

**ErrorMessage** is already coded and ready to use. It is a very simple class. Essentially it is a container for a string of 80 characters responsible to hold an error message.<br /> 
ErrorMessage has the following:<br />
#####ErrorMessage();
A constructor that creates an empty ErrorMessage<br />
#####void clear();
Clears the error message to an empty string.<br />
#####bool isClear()const;
Returns true if the ErrorMessage is empty (No Error)<br />
#####void message(const char* value);
Sets the ErrorMessage to an error message!<br />
#####const char* message()const; 
This accessor returns the error message to be printed.<br /><br />


We use this object to the status of the NFI and Perishable classes. If an error happens during console entry, we set this object to proper message to be shown later if needed. And using this, we can find out if class is in an erroneous state and take proper action. 
## NFI Class
Implement the NFI class to be a derived class out of an Item class.<br /> 
Essentially, NFI is a Streamable Item class that is not abstract. <br />


###Private member variables

NFI class has only one private member variable of type ErrorMessage, called **_err**.<br />

###Constructor:
NFI has only one default constructor that sets:<br />
UPC to an empty string<br />
Name to an empty string<br />
Price to zero<br />
Quantity Needed to 1<br />

###Public member functions

NFI implements all four pure virtual methods of the class Streamable.  (the signatures of the functions are identical to those of Streamable).<br />

####fstream& NFI::store(fstream& file)const:
Using the operator<< of ostream first writes the character **N** and the a comma into the **file** argument.<br />
The without any formatting or spaces writes all the member variables of Item comma separated in following order:<br />
upc, name, price, quantity, quantity needed <br />
and ends them with a new line. Then it will return the file argument out.<br /> 

Example: 
<pre>
N,1234,Box,123.45,1,5&lt;Newline&gt;
</pre>
####fstream& NFI::load(fstream& file)
Using the operator>>, ignore and getline methods of istream, NFI reads all the records form the file and sets the member variables using the setter methods. When reading the records, load assumes that the record does not have the **N,** at the begining, so it starts the reading from the upc.<br /><br />

No error detection is done. <br /><br />

At the end the file argument is returned. <br /><br />

***Hint: have temporary variables of type double, int and string and read the read the fields one by one, skipping the commas. After each read set the member variables using setter methods. ***

####ostream& NFI::display(ostream& ostr, bool linear)const. 
If the **_err** member variable is not clear (use isClear member function). It simply prints the _err using ostr and returns ostr.<br /> 
If the **_err** member variable is clear (No Error) then depending on the value of linear, display(), prints the Item in different formats:<br /> 

#####Linear is true:
Prints the Item values separated by Bar “|” character in following format:<br />
<pre>
1234   |Box                 | 139.50|   1|   5
</pre>
**Upc:** left justified in MAX_UPC_LEN characters<br />
**Name:** left justified 20 characters wide<br />
**Cost:** (not the price) right justified, 2 digits after decimal point 7 chars wide<br />
**Qty on hand:** right justified 4 characters wide<br />
**Quantity needed:** right justified 4 characters wide<br />
**NO NEW LINE**<br />

#####Linear is false:
Prints one member variable per line in following format:<br />
<pre>
Upc: 1234
Name: Box
Price: 123.45
Price after tax: 139.50
Quantity On Hand: 1
Quantity Needed: 5 
&lt;Newline&gt;
</pre>
Afterwards, display returns the ostr argument.

####istream& NFI::conInput(istream& istr):
Receives the values using istream (the istr argument) exactly as the following: 
<pre>
Non-Food Item Entry:
Upc: 1234&lt;ENTER&gt;
Name: Box&lt;ENTER&gt;
Price: 123.45&lt;ENTER&gt;
Quantity On Hand: 1&lt;ENTER&gt;
Quantity Needed: 5&lt;ENTER&gt; 
</pre>
if **istr** is in a **fail** state, then the function exits doing nothing other than returning istr<br />
If at any stage istr fails (can not read), **_err** will be set to the proper error message and the rest of the entry is skipped and nothing is set in the Item. (also no error messege is displayed).<br />
Here are the error messages:<br />

fail at Price Entry:<br />
**Invalid Price Entry**<br />
fail at Quantity Entry:<br />
**Invalid Quantity Entry**<br />
fail at Quantity Needed Entry Entry:<br />
**Invalid Quantity Needed Entry**<br />

Since the rest of the member variables are text, istr cannot fail on them. Therefore there are no error messages designated for them.<br />

Make sure at the end of the Entry you do not read the last new line or flush the key board.<br /> 

At end, conIput will return the istr argument. <br />

##Perishable Class
***Please note that the Perishable and NFI classes are identical in logic. The only difference is that the Perishable class has two extra member variables that have to be received and printed in addition to what Item has. Keeping this into account, let’s continue:***<br />
Implement the Perishable class to be a derived class out of an Item class.<br />
Essentially, Perishable is a Streamable Item class that is not abstract.<br /> 
###Private member variables
Perishable class has three private member variables:<br />
An ErrorMessage, called **_err**.<br />
A character array called  **_unit** (11 chars long)<br />
A Date, called **_expiry**<br />

###Constructor:
Perishable has only one default constructor that sets:<br />
UPC to an empty string<br />
Name to an empty string<br />
Price to zero<br />
Quantity Needed to 1<br />
isTaxed to false<br />
**and**<br />
unit to an empty string<br />
###Public member functions
####Public Accessors(setters and getters)

#####const Date& expiry()const;
returns a constant reference to _expiry member variable.
#####void expiry(const Date &value);
Sets the _expiry attribute to the incoming value.
#####const char* unit()const;
returns a constant pointer to the _unit member variable.
#####void unit(const char* value);
Copies the incoming value string into the _unit string. <br />
Make sure copying does not pass the size of the _unit array.  <br /><br /><br />

###Pure virtual method implementations 
Perishable implements all four pure virtual methods of the class Streamable. (the signatures of the functions are identical to those of Streamable).<br />
####fstream& Perishable::store(fstream& file)const:
Using the operator<< of ostream first writes the character P and the a comma into the file argument.<br />
Then without any formatting or spaces writes all the member variables of Item comma separated in following order:<br />
```
upc, name, price, unit, quantity, quantity needed, expiry date 
```
and ends them with a new line. Then it will return the file argument out.<br />
Example:
```
P,1234,water,1.5,lit,1,5,2017/10/12<Newline>
```
####fstream& Perishable::load(fstream& file):
Using the operator>>, ignore and getline methods of istream, Perishable reads all the records form the file and sets the member variables using the setter methods. When reading the records, load assumes that the record does not have the **“P,”** at the beginning, so it starts the reading from the upc.<br /><br />

No error detection is done. <br /><br />

At the end the file argument is returned.<br /><br /> 

***Hint: have temporary variables of type double, int and string and read the read the fields one by one, skipping the commas. After each read set the member variables using setter methods.***
####ostream& Perishable::display(ostream& ostr, bool linear)const:
If the _err member variable is not clear (use isClear member function). It simply prints the _err using ostr and returns ostr.<br />
If the _err member variable is clear (No Error) then depending on the value of linear, display(), prints the Item and Perishable member variables in different formats:<br />
#####Linear is true:
Prints the Item values separated by Bar “|” character in following format:
```
1234   |water               |   1.50|   1|   5|lit       |2017/10/12
```
**Upc:** left justified in MAX_UPC_LEN characters<br />
**Name:** left justified 20 characters wide<br />
**Cost:** (not the price) right justified, 2 digits after decimal point 7 chars wide<br />
**Qty on hand:** right justified 4 characters wide<br />
**Quantity needed:** right justified 4 characters wide<br />
**Unit:** left justified 10 characters wide<br />
**Expiry Date:** prints as is<br />
NO NEW LINE<br />
#####Linear is false:
Prints one member variable per line in following format:
```
upc: 1234
name: water
price: 1.50
Price after tax: 1.50
Quantity On hand: 1
Quantity Needed: 5
Unit: lit
Expiry date: 2017/10/12
<Newline>
```
Afterwards, display returns the ostr argument.<br />
####istream& Perishable::conInput(istream& istr):
Receives the values using istream (the istr argument) exactly as the following:<br />
```
Perishable Item Entry:
upc: 1234<ENTER>
name: water<ENTER>
price: 1.5<ENTER>
Quantity On hand: 1<ENTER>
Quantity Needed: 5<ENTER>
Unit: lit<ENTER>
Expiry date (YYYY/MM/DD) : 2017/10/12<ENTER>
```
if istr is in a fail state, then the function exits doing nothing other than returning istr.<br />
If at any stage istr fails (can not read), _err will be set to the proper error message and the rest of the entry is skipped and nothing is set in the Item. (also no error messages is displayed).<br />
Here are the error messages:<br />
fail at Price Entry:<br />
**Invalid Price Entry**<br />
fail at Quantity Entry:<br />
**Invalid Quantity Entry**<br />
fail at Quantity Needed Entry Entry:<br />
**Invalid Quantity Needed Entry**<br />
#####If Expiry (Date) Entry fails then do the following:
######1 - depending of the error code stored in the Date class set the error message in _err to:
CIN_FAILED:<br />
**Invalid Date Entry**<br />
YEAR_ERROR:<br />
**Invalid Year in Date Entry**<br />
MON_ERROR:<br />
**Invalid Month in Date Entry**<br />
DAY_ERROR:<br />
**Invalid Day in Date Entry**<br />
######2- Then to be consistent with istream failure, manually set  istr in failure mode by calling this function:
```cpp
istr.setstate(ios::failbit);
```
<br />
Since the rest of the member variables are text, istr cannot fail on them. Therefore there are no error messages designated for them.<br />
Make sure at the end of the Entry you do not read the last new line or flush the keyboard.<br />
At end, conInput will return the istr argument. <br />
##Submission
refere to your professor's instruction to submit the assignment. 
### Sections E and F
####Due date
Due date is: Sat Apr 11 @ 14:00
####Submission process
copy nfipshTester.cpp , Perishable files, Item files, NFI files, Streamable files, Date files, ErrorMessage files and general.h to your ms4 directory on matrix and execute:
```ksh
$ ~fardad.soleimanloo/submit_ms4
```
