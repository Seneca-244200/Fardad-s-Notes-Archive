[For Milestone 4 go here](https://github.com/Seneca-OOP244/FP20151MS4)
#MILESTONE 3: THE ITEM CLASS 
***Before anything I must remind you that you should NOT have more than one return statement in a function. This rule (having one point of entry to and one point of exit out of a function) was stablished during the structured programming era decades ago. Doing it now is a huge step backward in programming and is not allowed. Thank you!***<br /><br />
Create a class called Item. The class Item is responsible to encapsulate a general streamable item.<br />
Although the class Item is Streamable (inherited from Streamable) but it will not implement any of the pure virtual member functions, therefore it remains abstract.<br />
The class Item is implemented under the oop244 namespace. Code the Item class in the Item.cpp and Item.h files provided in this repository.<br />
You do not need the Date class for this milestone. <br />
##Item Class specs:
###Private Member variables:
####_upc:  Character array, MAX_UPC_LEN + 1 characters long
This character array holds the UPC (barcode) of the items as a string.<br />
####_name: Character pointer
This character pointer points to a dynamic string that holds the name of the Item<br />
####_price: Double
Holds the Price of the Item<br />
####_taxed; Boolean
This variable will be true if this item is taxed<br />
####_quantity; Integer
Holds the on hand (current) quantity of the item.<br />
####_qtyNeeded; Integer
Holds the quantity needed for the shipment<br />
###Public member variables and constructors
####Constructor:
Item is constructed by passing 5 values to the constructor:<br />
the UPC, the Name, the price, the Quantity needed and if the item is taxed or not. <br />
#####The constructor:
-Copies the UPC into the corresponding member variable up to MAX_UPC_LEN characters. <br />
-Allocates enough memory to hold the name in the _name pointer and then copies the name into the allocated memory pointed by the member variable _name.<br />
-sets quantity on hand to zero. <br />
-sets the rest of the member variables to the corresponding values received by the arguments.<br />
-if value for item being taxed is not provided, it will set the _taxed flag to the defaulted value “true”<br />

#####Dynamic memory allocation necessities:
Implement the copy constructor and the operator= so the item is copied from and assigned to another Item safely and without any memory leak.<br />
Also implement the destructor to make sure the memory allocated by _name is freed when Item is destroyed. <br />

####Accessors:
#####Setters:
Create the following setter functions to set the corresponding member variables:<br />
######- upc
######- price
######- name
######- taxed
######- quantity
######- qtyNeeded  (quantity Needed)
All the above setters return void. <br />
#####Getters:
Create the following getter functions to return the values or addresses of the member vairables: <br />
######- upc
returns constant character pointer<br />
######- price
returns double<br />
######- name
returns constant character pointer<br />
######- taxed
returns boolean<br />
######- quantity
returns integer<br />
######- qtyNeeded  (quantity Needed)
returns integer<br />
Also:
######- cost
returns double<br />
Cost returns the cost of one unit of the the item after tax (defined in general.h) that is (price + price * tax). If Item is not taxed the return value of cost() will be the same as price.
All the above getters are constant methods, which means they can NOT modify the owner. <br />

#####Member Operator overloads:
######Operator==
receives a constant character pointer and returns a Boolean. <br />
This operator will compare the received constant character pointer to the UPC of the Item, if they are the same, it will return true or else, it will return false. <br />

######Operator+=
receives an integer and returns an integer. <br />
This operator will add the received integer value to the quantity on hand of the Item, returning the sum.
#####Non-Member operator overload:<br />
######Operator+=
receives a double reference value as left operand and a constant Item reference as right operand and returns a double value;<br />
This operator multiplies the cost of the Item by the quantity of the ~~time~~***Item*** and then adds that value to the left operand and returns the result. <br />
Essentially this means: This operator adds the total cost of the item on-hand to the left operand, which is a double reference and then returns it. <br />
##Submission:
Refer to your professor’s instructions for submission.
###Due Date:
Refer to your professor’s instructions for submission due date;
####Sections E and F
Due date for milestaone 3 Tue Apr 7th, noon <br />
To submit milestone 3: copy Item.cpp, Item.h, Streamable.cpp, Streamable.h, general.h and ItemTester.cpp to your matrix account and issue the following command:<br />
<pre>
$ ~fardad.soleimanloo/submit_ms3
</pre>
