/*

Write a C++ program to demonstrate binary subtraction (-) operator overloading by creating a class Distance that subtracts two distance objects and displays the result.

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

class Distance
{
    float km;
    public:
        Distance() {}
        Distance(float dis)
        {
            km = dis;
        }

        Distance operator - (Distance d) {

            Distance result;

            result.km = km - d.km;

            return result;
        }

        void display()
        {
            cout << "Distance Between Two Object is : " << km << "\n";
        }
};

int main()
{
    clearScreen();
    
    Distance d1(50), d2(43);
    Distance ans = d1-d2;
    ans.display();
    return 0;
}
