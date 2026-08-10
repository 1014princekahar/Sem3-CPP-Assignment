/*

Write a C++ program to demonstrate pointers to members. Create a class Book with data members title and price and a member function display(). Use pointer to data members and pointer to member function to access and call them.

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

class Book
{
public:
    string title;
    float price;

    void display()
    {
        cout << " ---------------- Book Detals ---------------- \n"
             << " Title is : " << title << endl
             << " Price is : " << price << endl;
    }
};

int main()
{
    clearScreen();

    Book b1 = {"Ansi C Book", 350};

    string Book ::*Title = &Book ::title;

    float Book ::*Price = &Book ::price;

    void ( Book :: *func)() = &Book :: display;

    (b1.*func)();


    return 0;
}
