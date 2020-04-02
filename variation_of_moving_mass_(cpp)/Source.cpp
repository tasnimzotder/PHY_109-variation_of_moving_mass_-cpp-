#include <cmath>
#include <iostream>

//! include .cpp when you're using other Text Editor/IDE
#include "MassVariation.cpp"
//! only include .h when you're using Visual Studio
//#include "MassVariation.h"
using namespace std;

MassVariation MObj;

void welcomeMessage() {
    cout << "\n"
         << endl;
    cout << "\t\t--- Calculator - Mass of a Moving Mass ---\n\n"
         << endl;
}

bool inputMessage() {
    float initialMass;
    float velocity;

    cout << "\t\t"
         << "* Initial mass of the object (Kg): ";
    cin >> initialMass;

    cout << "\t\t"
         << "* Velocity of the object (m/s): ";
    cin >> velocity;

    return MObj.getData(initialMass, velocity);
}

void calculateMass() {
    cout << "\n\n\t\t"
         << "The Mass of the Object is: " << endl;
    cout << "\n\t\t\t" << MObj.showMass() << " Kg\n\n"
         << endl;
}

int main() {
    welcomeMessage();

    bool response = inputMessage();

    if (response) {
        calculateMass();
    } else {
        cout << "# Please enter velocity < light velocity"
             << "\n\n"
             << endl;
    }

    system("pause");

    return 0;
}
