#include <iostream>
using namespace std;


class Parent
{
   const char *name;
public:
    Parent(const char* p) 
    {
        name = p;
    }
     void display() { cout << "Parent " << name; }
};

class Child : public Parent
{
    const char* name;
public:
    Child(const char* pName, const char* cName) : Parent(pName) {
        name = cName;
    };
    void display() { 
            cout << "Child " << name << " of ";
            Parent::display();
        }
};


int main()
{
    Child c("Trudeau", "Justin");
    
    c.display();
    cout << endl;
}