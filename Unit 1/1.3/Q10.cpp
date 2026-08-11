/*

Write a program to create a class Book with bookId, title and price. Use parameterized constructor to initialize values and a member function to display book details.

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
    int BookID;
    string title;
    float price;

    Book(int id, string title, float price)
    {
        BookID = id;
        this->title = title;
        this->price = price;
    }

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

    Book b1(101, "Ansi C book", 350);
    b1.display();

    return 0;
}
