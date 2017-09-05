// OOP244 Workshop 1: Compiling modular source code
// File	w1step1.cpp
// Version 1.0
// Date	2015/05/07
// Author	Franz Newland
// Description
// This provides some source code in a single file to break 
// into modules and compile together
//
// Revision History
// -----------------------------------------------------------
// Name			Date		Reason
// F.Newland	2015/01/09		Preliminary release
/////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;

const char* printMsg = "Finished... Exiting\n";	//End message
const char* errMsg = "Try again\n";	//Error message
const char* cancelMsg = "Order cancelled - Start again\n";	//Cancel message

//Functions
int checkout();			// Display menu and return selection

int main(){
  int iCost = 0;	// Selected item cost
  int iTotal = 0;
  cout << "SeneKEA Order Tool\n"
    << "======================\n";

  // process user input
  while (iCost != 10){
    iCost = checkout();
    if (iCost == 0)
      cout << errMsg;
    else if (iCost == -1) {
      iTotal = 0;
      cout << cancelMsg;
    }
    else if (iCost == 10) {
      cout << "Total is $" << iTotal << endl;
      cout << printMsg;
    }
    else {
      cout << "Total increases by $" << iCost << endl;
      iTotal += iCost;
    }
  }
  return 0;
}

// int checkout()
// Description: prompts for and accepts an option selection from 
// standard input and returns the integer price for the selected option
// Outputs: returns the price of the selected option, -1 to cancel, 10 to pay 
// or 0 otherwise
///////////////////////////////////////////////////////////////////////////
int checkout(){
  int iSelection = 0;			//storage of the user response
  int iPrice = 0;
  cout << '\n';
  cout << "Please select from the following options :\n";
  cout << " 1 Shelf unit $2\n";
  cout << " 2 Desk $4\n";
  cout << " 3 Bed $4\n";
  cout << " 4 Chair $2\n";
  cout << " 5 Pay\n";
  cout << " 6 Cancel\n";

  cin >> iSelection;
  if ((iSelection > 0) && (iSelection < 7)){//if user response is valid
    if (iSelection == 1 || iSelection == 4)
      iPrice = 2;
    else if (iSelection < 5)
      iPrice = 4;
    else if (iSelection == 5)
      iPrice = 10;
    else
      iPrice = -1;
    cout << "Thank you\n";
  }
  else
    cout << "Incorrect entry\n";

  return iPrice;
}
