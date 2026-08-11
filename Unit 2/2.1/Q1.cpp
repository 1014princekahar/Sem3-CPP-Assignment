/*

Create a base class Student with rollNo and name. Derive a class Marks from Student. Store marks of 3 subjects and display complete student details with total marks.

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
public:
    int rollNo = 101;
    string name = "Prince Kahar";
};

class Marks : public Student
{
public:
    int marks[3] = {90, 93, 86};

    void display()
    {
        printf(" ----------------- Student Details ----------------- \n");
        printf(" Roll No: %d\n", rollNo);
        printf(" Name: %s\n", name);
        cout << " Name: " << name << endl;

        for (int i = 0; i < 3; i++)
        {
            printf(" Marks[%d]: %d\n", i + 1, marks[i]);
        }
    }
};

int main()
{
    clearScreen();

    Marks m;
    m.display();

    return 0;
}
