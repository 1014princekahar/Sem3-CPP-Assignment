/*

Write a C++ program to create a class Rectangle with private data members length and breadth. Write a member function to return area. In main(), receive an object of class Rectangle and display its area.

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

class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    float area()
    {
        return length * breadth;
    }
};

int main()
{
    clearScreen();
    Rectangle r1(10, 50);
    cout << "The Area of Rectangle is " << r1.area() << endl;

    return 0;
}
