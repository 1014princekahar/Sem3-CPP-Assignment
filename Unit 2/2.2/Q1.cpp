/*

Write a C++ program to demonstrate function overloading by creating a class Calculator with overloaded functions add() to perform addition of two integers, three integers, and two floating-point numbers.

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

class Calculator
{
    int a, b, c;
    float d, e;

public:
    int add(int x, int y)
    {
        a = x;
        b = y;
        return a + b;
    }

    int add(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        return a + b + c;
    }

    float add(float x, float y)
    {
        d = x;
        e = y;
        return d + e;
    }
};

int main()
{
    clearScreen();
    
    Calculator c;

    cout << "Addition of two integers: "
         << c.add(10, 20) << endl;

    cout << "Addition of three integers: "
         << c.add(10, 20, 30) << endl;

    cout << "Addition of two floating-point numbers: "
         << c.add(10.2f, 20.3f) << endl;
    return 0;
}
