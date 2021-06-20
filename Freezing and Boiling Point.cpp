//  CISP 400
//  Lab Assignment No. 4
//  Program Challenge No. 21: Freezing and Boiling Point
//
//  Created by Yusef on 3/28/21

#include <iostream>
using namespace std;

int main()
{
    int temperature;
    
    // Get the temperature
    cout << "Enter a temperature and I will tell you if an element will freeze \n"
    << "or boil at that temperature: ";
    cin >> temperature;
    cout << endl;
    
    // Determine
    if (temperature <= 32)
        cout << "\nWater will freeze at that temperature.\n";
    if (temperature >= 212)
        cout << "Water will boil at that temperature.\n";
    if (temperature <= -362)
        cout << "Oxygen will freeze at that temperature.\n";
    if (temperature >= -306)
        cout << "Oxygen will boil at that temperature.\n";
    if (temperature <= -38)
        cout << "Mercury will freeze at that temperature.\n";
    if (temperature >= 676)
        cout << "Mercury will boil at that temperature.\n";
    if (temperature <= -173)
        cout << "Ethyl Alcohol will freeze at that temperature. \n";
    if (temperature >= 172)
        cout << "Ethyl Alcohol will boil at that temperature. \n";
    
    cout << endl;
    
    return 0;
}
