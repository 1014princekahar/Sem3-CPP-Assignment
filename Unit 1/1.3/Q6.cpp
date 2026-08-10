/*

Write a program to create a class Student with a copy constructor. Copy data from one object to another using the copy constructor and display the copied data.

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
    Student()
    {
        rollNo = 101;
        name = "Prince Kahar";
        marks = 94.5;
    }

    Student(const Student &obj)
    {
        rollNo = obj.rollNo;
        name = obj.name;
        marks = obj.marks;
    }

    void display()
    {
        cout << "Roll No : " << rollNo << endl
             << "Name : " << name << endl
             << "Marks : " << marks << endl << endl;
    }
};

int main()
{
    clearScreen();

    Student s1;
    cout << "Default Constructor\n";
    s1.display();
    
    Student s2(s1);
    cout << "Copy Constructor\n";
    s2.display();

    return 0;
}
