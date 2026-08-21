/*

Write a C++ program to demonstrate friend function operator overloading by creating a class Complex and using a friend function to overload the multiplication (*) operator.

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
    int real, imag;

public:
    Complex() {}
    Complex(int a, int b)
    {
        real = a;
        imag = b;
    }

    friend Complex operator * (Complex, Complex);

    void display()
    {
        cout << real << " + " << imag << "i\n"; 
    }
};

Complex operator * (Complex c1, Complex c2)
{
Complex temp;
temp.real = c1.real * c2.real;
temp.imag = c1.imag * c2.imag;

return temp;
}

int main()
{
    clearScreen();
    Complex c1(5, 10), c2(8, 2), c3;

    c1.display();
    return 0;
}
