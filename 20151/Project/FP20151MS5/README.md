# Final project Milestone 5, 20151 
For your final milestone for this project, create a class call "AidApp". <br />
Get the source files from this repository and overwrite the classes with the one you developed and then start working on AidApp.<br /><br />
AidApp is a class that uses the previously created classes in this project to give the user capability to store and retrieve NFI and Perishable item information within a file. <br /><br />
AidApp have several private member functions and only two public ones.<br /><br />
When describing the functions, first there will be a description of what the function does, and then for some of the more complicated functions there will be a suggested pseudo code for how to implement the function. You are free either to use your own logic or follow the pseudo code, OR follow the pseudo code and then modify and better the logic.<br /><br />
Code your classes in AidApp.cpp and AidApp.h.<br />
An executable version is at:
```
~fardad.soleimanloo/ms5 
```

## AidApp class
### Private member variables:
####Char _filename[256];
holds the name of the text file to store the items' information.
####Item* _items[MAX_NO_RECS];
An array of Item pointers, MAX_NO_RECS long. (i.e. Each element of this array is an item pointer)
####Std::fstream datafile;
A fstream instance to create and access a file.
####int _noOfItems;
Number of Items (NFI or Perishable) kept by _items array. 
### the constructor
The AidApp constructor receives a constant char string called filename and then: <br />
1- copies filename to _filename member variable<br />
2- sets all the _items to null<br />
3- sets _noOfItems to null<br />
4- loads the Records<br />
### Private member variables:
#### Copy and assignment prevention 
Create an empty copy constructor and an assignment operator privately to prevent copying and assignment for the instance of AidApp.
### Private logic (member functions)
####  int menu()
Menu() displays the menu as follows and waits for the user to select an option. <br />
```
Disaster Aid Supply Management Program
1 - List items
2 - Add Non-food item Item
3 - Add Perishable item
4 - Update item quantity
0 - exit program
> 
```
if the selection is valid, it will return the selection<br />
if not it will return -1<br />
this funtion makes sure there is no characters left in keyboard
and wipes it before exit.
#### void loadRecs();
Opens the file for reading, if it does not exist, it will create an empty file and exits<br />
otherwise:<br />
Loads Records from the file overwriting the old ones pointed by item. <br />
This function makes sure when loading records into _item pointers, they are deallocated before if they are already pointing to an item. <br />
finally it closes the file<br />
```
Pseudo code:
set readIndex to zero
open the file for reading (use ios::in)
if the file is in fail state it means there is no file on the disk, then
  clear the failure 
  close the file
  open the file for writing (ios::out) to create the file
  close thefile
otherwise
  until reading fails loop
     if item pointer at readindex is not null delete it
     read one character from file into Id character
     if Id character is P
       Dynamically create a Perishable item and hold it in item pointer at readIndex
     if Id character is N
       Dynamically create a NFI item and hold it in item pointer at readIndex
     if either P or N is read
        skip the comma in the file
        load the item from the file (using its load method)
        add one to read index
  continue the loop
set number of items to readIndex
close the datafile
```
#### void saveRecs()
Opens the file for writing<br />
Loops through the _items array up to _noOfItems and stores them in the datafile<br />
closes the file<br />
#### void listItems()const
First it will print the following title :
```
 Row | UPC    | Item Name          | Cost  | QTY|Need| Unit     | Expiry
-----|--------|--------------------|-------|----|----|----------|----------
```
Then it Loops through the _items array up to _noOfItems and prints the Row number in four spaces right justified<br />
Aftewards it prints a Bar character (|) surrounded by two spaces and then prints the current item in the loop followed by a newline<br />
Meanwhile in the loop it will calculate the total cost of the items in a double value using the operator+= implemented for the Item class: (double operator+=(double& d, const Item& I)). 
After the list is done it will close the list with:
```
---------------------------------------------------------------------------
```
and then print the total cost like this at the bottom:
```
Total cost of support: $999.99
```
The total cost value is printed with a Dollar sign at left and two digits after decimal point
#### int SearchItems(const char* upc)const
Loops through the _items up to _noOfItems and checks each of them for the same UPC as the incoming argument using the operator== implemented for Item class.<br />
If a match is found it will return the index, otherwise it will return -1.
#### void updateQty(const char* upc)
Updates the quantity on hand for an item.<br />
updateQty() searches for the item with the same upc as incoming argument. If not found it will display:
```
"Not found!"<NEWLINE>
```
If found, it will display the item in non-linear format and then asks for an integer for quantity purchased:
```
"Please enter the number of purchased items: "
```
If it can not read the integer it prints:
```
"Invalid Quantity value!"<NEWLINE>
```
If it can read the integer, it makes sure the amount is less than or equal to the amount required (i.e. less than qtyNeeded() - quantity()). If it is less than or equal, it will add the value to the quantity on hand of the item using operator+= overloaded for Item. If the value is not less than or equal the amount needed, then it will only accept the amount required and prints message to return the extra:
```
"Too much items, only 999 is needed, please return the extra 99 items."<NewLine>
```
then it will save all the records back to the file and print:
```
"Updated!"
```
Make sure after the entry the keyboard is flushed.
#### void addItem(bool isPerishable)
Depending on the value of the argument being true or false, create a Perishable or NFI item and get the values from the user. If there is an error, display the item and exit the function, if not, open the datafile for write and store the Item and then close the file.
####  int run();
Display the menu and depending on the users selection, do the actions requested and redisplay the menu until user selects zero to exit. <br />
if user selects 4 print:
```
"Please enter the UPC: "
```
get the UPC and continue with updating the quantity. <br />
If user select 0 print:
```
 "Goodbye!!"<NEWLINE>
```
and exit the program.<br />
If user select something invalid, print:
```
"===Invalid Selection, try again.==="
```

