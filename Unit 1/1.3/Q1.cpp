/*

Write a program to create a class Time with data members hour, minute and second. Use a default constructor to initialize all data members to 0 and display the time.

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
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = minute = second = 0;
    }

    void display()
    {
        cout << "Hour : " << hour << endl
             << "Minute : " << minute << endl
             << "Second : " << second << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    Time t1;
    t1.display();

    return 0;
}
