/*

Write a program to create a class String with a dynamic constructor that allocates memory for a string entered by the user.

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

class String
{
private:
    string str;

public:
    String()
    {
        str = new char[100];

        cout << "Enter Your Name : ";
        getline(cin, str);
    }

    void display()
    {
        cout << "Your String is " << str << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    String s1;
    s1.display();

    return 0;
}
