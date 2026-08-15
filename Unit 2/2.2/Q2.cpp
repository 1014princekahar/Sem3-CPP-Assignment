/*

Write a C++ program to demonstrate unary minus (-) operator overloading by creating a class Number and overloading the unary minus operator to change the sign of a number.

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

class Number
{
    int a;

public:
    Number(int n)
    {
        a = n;
    }

    void operator - ()
    {
        a = -a;
    }

    void display()
    {
        cout << "The Number is : " << a << "\n";
    }
};

int main()
{
    clearScreen();

    Number n(10);

    // n.operator-();
    -n;
    
    n.display();
    return 0;
}
