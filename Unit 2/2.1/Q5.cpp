/*

Create a base class Number with one private and one protected data member. Derive a class Display from Number and show which members can and cannot be accessed.

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
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
};

class Display : public Number
{
public:
    Display()
    {
        // cout << "A = " << a << endl; // it is not access because it is a private member data
        cout << "A is Not Accessable due to Private Member Data\n";
        cout << "B = " << b << endl;
        cout << "C = " << c << endl;
    }
};

int main()
{
    clearScreen();
    Display d;
    return 0;
}
