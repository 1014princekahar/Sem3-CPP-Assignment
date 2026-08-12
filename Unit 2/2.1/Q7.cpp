/*

Demonstrate composition (container object) by creating a class Engine with engine details. Create a class Car that contains an Engine object and displays both car and engine information.

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

class Engine
{
private:
    string engineType;
    int hoursePower;

public:
    Engine(string type, int power)
    {
        engineType = type;
        hoursePower = power;
    }

    void displayEngine()
    {
        cout << " -------------------------- Engine Details -------------------------- " << endl
             << " Engine Type: " << engineType << endl
             << " Hourse Power: " << hoursePower << "HP" << endl
             << endl;
    }
};

class Car
{
private:
    string carName, carModel;
    Engine e;

public:
    Car(string Name, string model, string Type, int power)
        : carName(Name), carModel(model), e(Type, power) {};

    void displayCar()
    {
        cout << " -------------------------- Car Details -------------------------- " << endl
             << " Car Name: " << carName << endl
             << " car Model: " << carModel << endl
             << endl;

        e.displayEngine();
    }
};

int main()
{
    clearScreen();

    Car c1("Toyota", "Camry", "Petrol", 203);
    c1.displayCar();
    return 0;
}
