/*

Write a C++ program to demonstrate pointers to objects by creating a class Student containing the data members roll number and name. Create an object pointer to access and display the student's details.

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
    int roll_no;
    string name;

public:
    Student()
    {
        roll_no = 101;
        name = "Prince Kahar";
    }

    void display()
    {
        cout << "Roll No : " << roll_no << "\n"
             << "Name : " << name << "\n";
    }
};

int main()
{
    clearScreen();

    Student s1;
    Student *ptr = &s1;
    ptr->display();

    return 0;
}
