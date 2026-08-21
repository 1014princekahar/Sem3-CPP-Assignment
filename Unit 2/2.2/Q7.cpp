/*

Write a C++ program to demonstrate overloading of the equality (==) operator by creating a class Student that compares the roll numbers of two student objects.

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
    int roll;
public:

    Student(int no)
    {
        roll = no;
    }

    void operator == ( Student s1) 
    {
        if(roll == s1.roll)
            cout << "Roll No is equal\n";
        
        else
            cout << "Roll No is not equal\n";
        
    }


};

int main()
{
    clearScreen();

    Student s1(10), s2(10);
    s1 == s2;
    return 0;
}
