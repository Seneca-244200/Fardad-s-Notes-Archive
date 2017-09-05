#include <iostream>
using namespace std;

class Parent
{
public:
    void display() { cout << "Parent"; }
};

class Child : public Parent
{
public:
    void display() { cout << "Child"; }
};

int main()
{
    Parent p;
    Child c;
    
    c.display();
}