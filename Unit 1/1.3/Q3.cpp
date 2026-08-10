/*

Write a program to demonstrate constructor overloading by creating a class Rectangle with (i) default constructor, (ii) parameterized constructor with length and breadth. Calculate and display area in each case.

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
    Rectangle()
    {
        cout << "Enter the Length : ";
        cin >> length;

        cout << "Enter The Breadth : ";
        cin >> breadth;
    }
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void Display()
    {
        cout << "Length : " << length << endl
             << "Breadth : " << breadth << endl
             << "Area : " << length * breadth << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    Rectangle r1;
    Rectangle r2(50, 6);

    cout << "\nDefault Constructor : " << endl;
    r1.Display();

    cout << "Parameterized Constructor : " << endl;
    r2.Display();
    return 0;
}
