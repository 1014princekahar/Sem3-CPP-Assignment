/*

Demonstrate the execution order of constructors and destructors using base class Base and derived class Derived. Display appropriate messages from each constructor and destructor.

*/

#include <iostream>
using namespace std;

void clearScreen()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

class BaseClass
{
public:
    BaseClass()
    {
        cout << "Base Class Default Constructor Called ... \n";
    }
    ~BaseClass()
    {
        cout << "Base Class Default Destructor Called ... \n";
    }
};

class DerivedClass : public BaseClass
{
    public:
        DerivedClass()
        {
            cout << "Derived Class Default Constructor Called ... \n";
        }
        ~DerivedClass()
        {
            cout << "Derived Class Default Destructor Called ... \n";
        }
};

int main()
{
    clearScreen();

    cout << "Creating an object of derived class ... \n";
    DerivedClass DC;

    cout << "Derived Class Object Created Successfully ... \n";

    return 0;
}
