/*

Write a C++ program to create a class Date with private data members day, month and year. Provide a member function to check whether the date is valid or not.

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

class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        cout << "Enter the Day: ";
        cin >> day;

        cout << "Enter the Month: ";
        cin >> month;

        cout << "Enter the Year: ";
        cin >> year;
    }

    void validateDate()
    {

        if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1)
        {
            cout << "Invalid Date" << endl;
            return;
        }

        int maxDay;

        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                maxDay = 29;
            else
                maxDay = 28;
        }

        else if (month == 4 || month == 6 || month == 9 || month == 11)
            maxDay = 30;

        else
            maxDay = 31;

        if (day > maxDay)
            cout << "Invalid Date" << endl;
        else
            cout << "Valid Date" << endl;
    }
};

int main()
{
    clearScreen();
    Date d1;
    d1.validateDate();
    return 0;
}
