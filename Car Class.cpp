//  CISP 301: Lab Assignment No. 13
//
//  Programming Exercise No. 2
//
//  Car Class
//
//  Created by Yusef on 5/4/21

#include <iostream>
#include <string>
using namespace std;

// Car Class definition
class Car
{
    private:
    string Make;
    int YearModel;
    int Speed;
    
    public:
    Car(string, int, int);
    void setMake(string);
    void setYearModel(int);
    void setSpeed(int);
    string getMake();
    int getYearModel();
    int getSpeed();
    
    void setAccelerate(int s)
    {
        Speed = s;
    }
    
    int getAccelerate()
    {
        return Speed += 5;
    }
    
    void setBrake(int s)
    {
        Speed = s;
    }
    
    int getBrake()
    {
        return Speed -= 5;
    }
    
    
};

// Functions for Car Class

Car::Car(string m, int y, int s = 0)
{   Make = m;
    YearModel = y;
    Speed = s;
}

void Car::setMake(string m)
{
    Make = m;
}

void Car::setYearModel(int y)
{
    YearModel = y;
}

void Car::setSpeed(int s)
{
    Speed = s;
}

string Car::getMake()
{
    return Make;
}

int Car::getYearModel()
{
    return YearModel;
}

int Car::getSpeed()
{
    return Speed;
}

int main()
{
    string vehicleMake;
    int vehicleYear,
        vehicleSpeed;
        
    // Get the make of the vehicle
    cout << "What is the make of the car? " ;
    cin >> vehicleMake;
    
    // Get the year of the car
    cout << "What is the year of the car? ";
    cin >> vehicleYear;
    
    // Get the speed of the car
    cout << "What is the speed of the car? ";
    cin >> vehicleSpeed;
    
    // Create a car object
    Car vehicle(vehicleMake, vehicleYear, vehicleSpeed);
    
    // Display the cars make, year, and speed
    cout << "\nThe make of the car is: " << vehicle.getMake();
    cout << "\nThe year of the car is: " << vehicle.getYearModel();
    cout << "\nThe speed of the car is: " << vehicle.getSpeed();
    cout << endl;
    
    cout << "\nCalling accelerate function 1x: " << vehicle.getAccelerate();
    cout << "\nCalling accelerate function 2x: " << vehicle.getAccelerate();
    cout << "\nCalling accelerate function 3x: " << vehicle.getAccelerate();
    cout << "\nCalling accelerate function 4x: " << vehicle.getAccelerate();
    cout << "\nCalling accelerate function 5x: " << vehicle.getAccelerate();
    cout << endl;
    
    cout << "\nCalling brake function 1x: " << vehicle.getBrake();
    cout << "\nCalling brake function 2x: " << vehicle.getBrake();
    cout << "\nCalling brake function 3x: " << vehicle.getBrake();
    cout << "\nCalling brake function 4x: " << vehicle.getBrake();
    cout << "\nCalling brake function 5x: " << vehicle.getBrake();
    cout << "\n";
    

    return 0;
}
