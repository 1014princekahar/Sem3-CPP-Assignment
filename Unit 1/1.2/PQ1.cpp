/*
Write a C++ program to create a class BankAccount with private data members accountNo and balance. Provide member functions to deposit and withdraw amount. Display the final balance.
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
    int accountNo;
    double balance;

public:
    BankAccount(int accountNo, double balance)
    {
        this->accountNo = accountNo;
        this->balance = balance;
    }

    void deposit()
    {
        double amt;

        cout << "Enter Amount To Deposit: ";
        cin >> amt;

        if (amt < 0)
            cout << "Amount should be greater then 0. \n";
        else
        {
            balance += amt;
            cout << amt << " rs Depoist Succesfully.. \n";
        }
    }

    void withdraw()
    {
        double amt;

        cout << "Enter Amount To Withdrawn: ";
        cin >> amt;

        if (amt < 0)
            cout << "Amount should be greater then 0. \n";

        else if (amt > balance)
            cout << "Insufficient balance ... \n";
        else
        {
            balance -= amt;
            cout << amt << " rs Withdraw Succesfully.. \n";
        }
    }

    void DisplayBalance()
    {
        cout << "\nAccount No: " << accountNo << endl;
        cout << "Updated Balance is: " << balance << endl
             << endl;
    }
};

int main()
{
    int choice;
    clearScreen();
    BankAccount BA(789456123, 10000);

    do
    {
        cout << " ----------------- Bank Account System ----------------- \n"
             << " | 1. Deposit                                          | \n"
             << " | 2. Withdraw                                         | \n"
             << " | 3. Display                                          | \n"
             << " | 4. Exit                                             | \n"
             << " ------------------------------------------------------- \n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            clearScreen();
            BA.deposit();
            break;

        case 2:
            clearScreen();
            BA.withdraw();
            break;

        case 3:
            clearScreen();
            BA.DisplayBalance();
            break;

        case 4:
            clearScreen();
            cout << "Byyy \n";
            return 0;

        default:
            clearScreen();
            cout << "You have Choose Wrong Operations ... \n";
            break;
        }
    } while (choice != 4);

    return 0;
}
