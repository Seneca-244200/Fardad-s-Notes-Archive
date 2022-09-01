#include <iostream>
#include "Utils.h"

// Step1: : check if the reading took place
// correctly: to do that, we check if istr is in a correct
// state -> if (istr) in the Utils.cpp file


using namespace std;
using namespace sdds;

int main() {
    
    int a{};
    //TEST PART 1
    // Test how cin fails!
    cout << "enter an integer >> ";
    cin >> a;
    if (!cin) { cout << "cin failed  "; cout << " |cin.fail()is = " << cin.fail(); }// input non-int and cin will fail, cin doesn't fail for newline and tab chactares, it simply ignors them
    else { cout << " The entered number is " << a; cout << " |cin.fail() is = " << cin.fail();
    }
    
    //TEST PART 2
    // Test cin.get() function and see how it gets only one character at a time
    cout << "enter another integer >> ";
    a = cin.get();
    if (!cin) { cout << "cin failed"; cout << " |cin.fail()is = " << cin.fail() << endl;
    }// is there a chance that it fails?
    else { cout << " The entered character is " << a; cout << " |cin.fail()is = " << cin.fail() << endl;
    }
    
    //TEST PART 3
    //// see how the rest from previous output goes to the next cin without flushing the buffer
    cin >> a;
    if (!cin) { cout << "cin failed"; cout << " |cin.fail()is = " << cin.fail() << endl;
    }// is there a wat that it fails?
    else { cout << " The entered character is " << a;  cout << " |cin.fail()is = " << cin.fail() << endl;
    }

    //TEST PART 4
    // see if cin works after it fails
    cout << "enter an integer >> ";
    cin >> a;
    if (!cin) { cout << "cin failed  "; cout << " |cin.fail()is = " << cin.fail() << endl; }// input non-int and cin will fail, cin doesn't fail for newline and tab chactares, it simply ignors them
    else { cout << " The entered number is " << a; cout << " |cin.fail() is = " << cin.fail();
    }
    cin.ignore(1000, '\n');
    cin >> a;
    if (!cin) { cout << "cin failed  "; cout << " |cin.fail()is = " << cin.fail(); }// input non-int and cin will fail, cin doesn't fail for newline and tab chactares, it simply ignors them
    else { cout << " The entered number is " << a; cout << " |cin.fail() is = " << cin.fail() << endl; }

   ut.getint(a,"Enter an integer \n>> ", cin);
    cout << "You Entered: " << a << endl;
    


    return 0;
}
