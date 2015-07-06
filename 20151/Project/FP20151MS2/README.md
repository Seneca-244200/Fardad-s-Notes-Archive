Version 1.1
#MILESTONE 2: THE STREAMABLE INTERFACE
[For Milestone 3 go here](https://github.com/Seneca-OOP244/FP20151MS3)<br /><br />
The Streamable class is provided to enforce inherited classes to implement functions to work with fstream and iostream objects.<br /><br />
Code the Streamable class in the Streamable.cpp and Streamable.h files provided in this  repository. <br /><br />
You do not need the Date class for this milestone. <br /><br />
##Pure virtual member functions (methods):
Streamable class, being an interface, has only four pure virtual member functions (methods) with following names: <br />
####1- Store
  -Is a constant member function (does not modify the owner) and receives and returns references of std::fstream.<br />
***In future milestones children of Streamable will implement this method, when they are to be stored in a file.***
####2- Load
  -Receives and returns references of std::fstream.<br />
***In future milestones children of Streamable will implement this method, when they are to be read from a file.***
####3- display
  -Is a constant member function and returns a reference of std::ostream.<br />
display() receives two arguments: the first is a reference of std::ostream and the second is a bool argument called linear.<br />
***In future milestones children of Streamable will implement this method when they are to be printed on the screen in two different formats:<br />
Linear: the class information is to be printed in one line<br />
Form: the class information is to be printed in several lines like a form.<br />***
####4- conInput
  -Returns and receives references of std::istream.<br />
***In future milestones children of conInput will implement this method when their information is to be received from console.*** 
<br /><br />
***As you already know, these functions only exist as prototypes in the class declaration in the header file.***


##Virtual destructor
Streamable should have an empty virtual destructor.

##Non-member IO operator overloads:
After implementing the Streamable class, overload the operator<< and operator>> to work with ostream (cout) to print a Streamable to, and istream (cin) to read a Streamable from, the console. Use the display() and conInput() methods to implement these operator overloads.<br />
When overloading operator<< with ostream, pass the value **true** to the display function for the linear argument.<br /><br />
Make sure the prototype of the functions are in Streamable.h.<br /><br />
These overloads are implemented here to make sure all children of Streamable can be read and written using cin and cout with no further implementation.<br /><br />
After implementing this class, compile it with **Myfile.cpp, MyFile.h** and **StreamableTester.cpp**. The program should compile with no error and using the tester program you will be able to read and append text to the streamable.txt file.

##Submission:
Like before a submission script will be provided shortly to hand the assignment it. 
###Due Date:
Refer to your professor’s instructions for submission due date;
####Sections E and F
Due date for milestaone 2 is Friday Apr 3rd , 23:59.<br />
To submit milestone 2: copy MyFile.cpp, MyFile.h, Streamable.cpp, Streamable.h and ms2.cpp to your matrix account and issue the following command:<br />
<pre>
$ ~fardad.soleimanloo/submit_ms2
</pre>


