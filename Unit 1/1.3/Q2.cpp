/*

Write a program to create a class Student with data members rollNo, name and marks. Use a parameterized constructor to initialize the values and display the details.

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

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout << "Roll No : " << rollNo << endl
             << "Name : " << name << endl
             << "Marks : " << marks << endl
             << endl;
    }
};

int main()
{
    clearScreen();

    Student s1(101, "Prince Kahar", 95.5);
    s1.display();

    return 0;
}
