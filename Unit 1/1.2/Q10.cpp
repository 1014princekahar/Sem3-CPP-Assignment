/*

Write a C++ program to create a class Time with private data members hour, minute and second. Overload the == operator to compare two Time objects for equality.

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

class Time
{
    int hour, minute, second;

public:
    void setTime()
    {
        cout << "Enter Your Hour : ";
        cin >> hour;

        cout << "Enter Your Minute : ";
        cin >> minute;

        cout << "Enter Your Second : ";
        cin >> second;

        cout << "\n\n";
    }

    bool operator==(Time t)
    {
        if (hour == t.hour && minute == t.minute && second == t.second)
            return true;
        return false;
    };
};

int main()
{
    clearScreen();
    Time t1, t2;

    cout << "Enter First Time : \n";
    t1.setTime();

    cout << "Enter Second Time : \n";
    t2.setTime();

    if (t1 == t2)
        cout << "Your time is equal \n";
    else
        cout << "Your time is not equal \n";
    return 0;
}
