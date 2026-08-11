/*

Write aa program to create a class BankAccount with balance as data member. Use constructors to initialize balance and a destructor to display the final balance before object destruction.

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

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        cout << "Constructor called ... \n\n";
        balance = 10000;
    }

    ~BankAccount()
    {
        cout << "The Balnace is " << balance <<endl;
        cout << "Destructor Called ... \n\n";
    }
};

int main()
{
    clearScreen();
    BankAccount BA;
    return 0;
}
