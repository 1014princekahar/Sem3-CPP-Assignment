/*

Write a program to demonstrate the use of destructors. Create a class Demo with a destructor that displays a message when the object is destroyed.

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

class Demo
{
public:
    Demo()
    {
        cout << "Default Construcor Called ... \n";
    }
    ~Demo()
    {
        cout << "Destructor Called ... \n";
    }
};

int main()
{
    clearScreen();

    Demo d1;
    
    return 0;
}
