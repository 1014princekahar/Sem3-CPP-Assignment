/*

Write a C++ program to demonstrate unary increment (++) operator overloading by creating a class Counter that increments the value of an object using the overloaded operator.

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

class Counter
{
    int count = 0;

public:
    void operator ++ ()
    {
        count++;
    }
    
    void display()
    {
        cout << "Count : " << count << "\n";
    }
};

int main()
{
    clearScreen();

    Counter c;
    ++c;
    c.display();
    return 0;
}
