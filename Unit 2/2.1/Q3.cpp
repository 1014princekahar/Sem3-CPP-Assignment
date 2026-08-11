/*

Create a base class Vehicle with protected members vehicleNo and companyName. Derive a class Car from Vehicle and display the protected members.

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

class Vehicle
{
protected:
    int vehicleNo;
    string companyName;

public:
    void setVehicle(int no, string name)
    {
        vehicleNo = no;
        companyName = name;
    }
};

class Car : public Vehicle
{
public:
    void display()
    {
        cout << " ------------------ Vehicle Details ------------------ " << endl
             << " Vehicle No: " << vehicleNo << endl
             << " Company Name: " << companyName << endl
             << endl;
    }
};

int main()
{
    clearScreen();
    
    Car c;
    c.setVehicle(101, "Honda");
    c.display();

    return 0;
}
