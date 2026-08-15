/*

Write a C++ program to demonstrate binary operator overloading by creating a class Complex and overloading the addition (+) operator to add two complex numbers.

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

class Complex
{
    int a, b;

public:
    void setData()
    {
        cout << "Enter First Number : ";
        cin >> a;

        cout << "Enter Second Number : ";
        cin >> b;
        cout << "\n\n";
    }

    Complex operator+(Complex obj)
    {
        Complex result;

        result.a = a + obj.a;
        result.b = b + obj.b;

        return result;
    }

    void display()
    {
        cout << "Result : " << a << " + " << b << "i\n";
    }
};

int main()
{
    clearScreen();

    Complex c1, c2;

    cout << "Enter First Complex Number Details : \n";
    c1.setData();

    cout << "Enter Second Complex Number Details : \n";
    c2.setData();

    Complex c3 = c1+c2;
    c3.display();
    return 0;
}
