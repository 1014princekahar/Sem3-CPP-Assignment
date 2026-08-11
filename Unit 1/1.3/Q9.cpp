/*

Write a program to create a class Matrix that allocates memory dynamically in constructor. Use destructor to deallocate the memory.

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

class Matrix
{
private:
    // int matrix[2][2];
    int **matrix;

public:
    Matrix()
    {
        *matrix = new int[2];
        for(int i = 0; i < 2 ; i++)
        {
            matrix[i] = new int[2];
        }

        printf("Memory Allocated ... \n");
    }

    ~Matrix()
    {
        printf("Memory Deallocated ... \n");
    }
};

int main()
{
    clearScreen();

    Matrix m;
    return 0;
}
