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
    float length, breadth, area;

public:
    Rectangle() {}
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    Rectangle Area()
    {
        Rectangle temp(length, breadth);

        temp.area = length * breadth;
        return temp;
    }

    float AREA()
    {
        return area;
    }
};

int main()
{
    clearScreen();
    Rectangle r1(10, 50), r2;
    r2 = r1.Area();
    cout << "The Area of Rectangle is " << r2.AREA() << endl;

    return 0;
}
