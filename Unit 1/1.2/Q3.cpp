/*

Write a C++ program to create a class Employee with private data members id, name and salary. Provide a member function to display the details of the employee.

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
private:
    int id;
    string name;
    float salary;

public:
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void Display()
    {
        cout << "Employee Id : " << id << endl
             << "Employee Name : " << name << endl
             << "Employee Salary : " << salary << endl <<endl;
    }
};

int main()
{
    clearScreen();
    
    Employee e1(1, "Prince", 95000);
    e1.Display();

    return 0;
}
