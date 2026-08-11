/*

Create a base class Person with name and age. Derive Employee from Person. Store employee ID and salary, and display all employee details.

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

class Person
{
public:
    string name;
    int age;

    Person() {}
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Employee : public Person
{
public:
    int empID;
    float salary;

    Employee(string name, int age, int id, float salary)
    {
        Person p(this->name = name, this->age = age);
        empID = id;
        this->salary = salary;
    }

    void display();
};

void Employee ::display()
{
    cout << " --------------- Employee Details --------------- " << endl
         << " EmpID: " << empID << endl
         << " Name: " << name << endl
         << " Age: " << age << endl
         << " Salary: " << salary << endl
         << endl;
}

int main()
{
    clearScreen();

    Employee e1("Prince Kahar", 19, 101, 95600);
    e1.display();

    return 0;
}
