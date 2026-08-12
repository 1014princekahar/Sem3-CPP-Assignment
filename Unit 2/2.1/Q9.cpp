/*

Demonstrate implementation of inheritance in the C++ object model using base class Shape with a function to accept dimensions. Derive a class Square from Shape to calculate and display the area of the square.

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

class Shape
{
protected:
    float dimension;

public:
    void setDimension()
    {
        cout << "Enter the side of Square : ";
        cin >> dimension;
    }
};

class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }

    void display()
    {
        cout << " -------------------------- Square Details --------------------------" << endl;
        cout << " Side: " << dimension << endl;
        cout << " Area: " << calculateArea() << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    Square sq;
    sq.setDimension();
    sq.display();

    return 0;
}
