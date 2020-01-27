/* CSCI 261 Lab 2A: Math Equations
 *
 * Authors: Alexa Nelson & Chloe Shanahan
 *
 *in this lab, we used code to represent real world math equations
 */

#include <iostream>

#include <cmath>

using namespace std;

int main() {
    // Ideal Gas Law
    double pressure; //units of atmospheres atm
    double volume; //in liters
    const double GASCONST = 0.082;
    double temperature; //in kelvin
    double moles;

    cout << "Ideal Gas Law" << endl;
    cout << "how many moles" << endl;
    cin >> moles;
    cout << "What is the volume in liters?" << endl;
    cin >> volume;
    cout << "what it the temperature in kelvin?" << endl;
    cin >> temperature;

    pressure = (moles * GASCONST * temperature)/ volume;
    cout << "The pressure in atmospheres atm is " << pressure << endl << endl;

    //Average Acceleration
    double timeOne;
    double timeTwo;
    double accelerationOne;
    double accelerationTwo;
    double aveAcceleration;

    cout << "Average Acceleration" << endl;
    cout << "What is the final time and acceleration (separated by a space)" << endl;
    cin >> timeTwo >> accelerationTwo;
    cout << "What is the starting time and acceleration (separated by a space)" << endl;
    cin >> timeOne >> accelerationOne;

    aveAcceleration = (accelerationTwo - accelerationOne)/ (pow(timeTwo- timeOne, 2));
    cout << "The average acceleration is " << aveAcceleration << endl << endl;

    // Ohm's Law
    double voltage;
    double current;
    double resistance;

    cout << "Ohm's Law" << endl;
    cout << "What is the voltage" << endl;
    cin >> voltage;
    cout << "what is the resistance" << endl;
    cin >> resistance;

    current = voltage/ resistance;
    cout << "the voltage is " << current << endl << endl;

    //Newton's Law of Universal Gravitational




    return 0;
}
