/*

Write a C++ program to demonstrate static data member. Create a class Student with static data member count that keeps track of total number of Student objects created. Display count using a static member function.

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
    static int count;

public:

    static void increment()
    {
        count++;
    }
    static void counter()
    {
        cout << "Count : " << count;
    }
};

int Student ::count = 0;

int main()
{
    clearScreen();

    Student s1, s2, s3;
    s1.increment();
    s2.increment();
    s3.increment();

    Student::counter();

    return 0;
}
