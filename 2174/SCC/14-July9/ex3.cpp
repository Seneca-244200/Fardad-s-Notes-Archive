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

// global helper function
void hello(Parent *X)
{
    cout << "Hello to ";
    X->display();
    cout << endl;
}

int main()
{
    Parent p("Trudeau");
    Child c("Trudeau", "Justin");
    
    hello(&p);
    hello(&c);
}
