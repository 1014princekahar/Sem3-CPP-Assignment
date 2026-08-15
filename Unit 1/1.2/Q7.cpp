/*

write a C++ program to create a class Matrix with 2D array as a private data member. Overload the + operator to add two matrices and return the result.

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
    int array[2][2];

public:
    void setMatrix()
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
            {
                cout << "Enter arr[" << i << "][" << j << "]: ";
                cin >> array[i][j];
            }

        cout << "\n\n";
    };

    Matrix operator+(Matrix obj1)
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.array[i][j] = array[i][j] + obj1.array[i][j];

        return result;
    }

    void display()
    {
        cout << "Resultant Matrx is : \n";
        
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cout << array[i][j] << "\t";
            cout << "\n";
    }
};

int main()
{
    clearScreen();
    Matrix m1, m2, result;

    cout << "Enter matrix 1 Details: \n";
    m1.setMatrix();

    cout << "Enter matrix 2 Details: \n";
    m2.setMatrix();

    result = m1+m2;
    result.display();
    return 0;
}
