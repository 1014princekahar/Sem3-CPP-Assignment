/*

Write a C++ program to demonstrate pointers to derived classes by creating a base class Person and a derived class Student. Create a pointer of the derived class to access and display both the inherited and derived class members.

*/

#include <iostream>uuuuuuuuu
using namespace std;

void clearScreen()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

class Person
{
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(string name, int age) : name(name), age(age) {}

    void displayPerson()
    {
        cout << "Name : " << name << "\n"
             << "Age : " << age << "\n";
    }
};

class Student : public Person
{
    int rollNo;
    string course;

public:
    Student(string name, int age, int rollNo, string course)
        : Person(name, age), rollNo(rollNo), course(course)
    {
    }

    void displayStudent()
    {
        cout << "Roll No : " << rollNo << "\n"
             << "Course Name : " << course << "\n";
    }
};

int main()
{
    clearScreen();

    Student s1("Prince", 19, 2021, "B.Sc.IT");
    Student *ptr = &s1;

    ptr->displayPerson();
    ptr->displayStudent();

    return 0;
}
