/*

Write a C++ program to create a class Circle with private data member radius. Provide a member function to calculate and return the area of the circle.

*/

#include <iostream>
using namespace std;

#define pi 3.14

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

class Circle
{
private:
    float radius;

public:

    Circle(float radius)
    {
        this->radius = radius;
    }

    float area()
    {
        return pi * radius * radius;
    }

};

int main()
{
    clearScreen();

    Circle c1(10);
    cout << "The Area or the circle is " << c1.area() << endl << endl;
    return 0;
}
