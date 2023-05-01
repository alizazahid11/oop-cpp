#include <iostream>
using namespace std;
 
class B
{
    public:
 
    // Virtual function
    virtual void f() {
        cout << "The base class function is called.\n";
    }
};
 
class D: public B
{
    public:
    void f() {
        cout << "The derived class function is called.\n";
    }
};
 
int main()
{
    B base;
    D derived;
 
    B *basePtr;
    basePtr= &base;
    basePtr->f();
    D*driveptr;
    driveptr = &derived;
    driveptr->f();
 
    return 0;
}
