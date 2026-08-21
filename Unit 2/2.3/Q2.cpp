/*

Write a C++ program to demonstrate the use of the this pointer by creating a class Employee containing the data members employee ID, name, and salary. Use the this pointer to initialize and display the object data.

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

class Employee
{
    int id;
    string name;
    float salary;

public:
    void setData(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void Display()
    {
        cout << "Id : " << id << "\n"
             << "Name : " << name << "\n"
             << "Salary : " << salary << "\n";
    }
};

int main()
{
    clearScreen();
    
    Employee e1;
    e1.setData(101, "Prince Kahar", 98250);
    e1.Display();

    return 0;
}
