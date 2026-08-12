/*

Create a base class Number that accepts two integers. Derive a class Calculator from Number to perform addition, subtraction, multiplication, and division, and display the results.

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

class Number
{
protected:
    float a, b;
public:
    Number() {}
    Number(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
};

class Calculator : public Number
{
public:
    Calculator(float num1, float num2)
    {
        this->a = num1;
        this->b = num2;
    }

    float addition()
    {
        return a + b;
    }

    float substration()
    {
        return a - b;
    }

    float multiplication()
    {
        return a * b;
    }

    float division()
    {
        return a / b;
    }

    void display()
    {
        cout << " Addition : " << addition() << endl
             << " Substraction :" << substration() << endl
             << " Multiplication : " << multiplication() << endl
             << " Division : " << division() << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    Calculator c(10, 3);
    c.display();

    return 0;
}
