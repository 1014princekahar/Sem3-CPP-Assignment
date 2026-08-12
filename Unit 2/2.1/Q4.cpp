/*

Create a base class Rectangle with length and width. Derive a class Area from Rectangle to calculate and display the area of the rectangle.

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
public:
    float length, width;
    Rectangle() {}
    Rectangle(float l, float b)
    {
        length = l;
        width = b;
    }
};

class Area : public Rectangle
{
public:
    Area(float l, float b)
    {
        Rectangle R(this->length = l, this->width = b);
    }

    void display()
    {
        cout << "The Area of Rectangle is " << length * width;
    }
};

int main()
{
    clearScreen();

    Area a(10, 6);
    a.display();
    return 0;
}
