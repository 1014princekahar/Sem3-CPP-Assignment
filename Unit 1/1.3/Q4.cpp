/*

Write a program to create a class Complex with real and imag as data members. Use a constructor with default arguments to initialize them. Display the complex number.

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
private:
    float real, imag;

public:
    Complex()
    {
        cout << "Enter the real number : ";
        cin >> real;

        cout << "Enter the imagin number : ";
        cin >> imag;
    }

    void Display()
    {
        cout << "Complex Number : " << real << " + " << imag << "i" << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    Complex c1;
    c1.Display();

    return 0;
}
