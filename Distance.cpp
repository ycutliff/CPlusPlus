//
//  main.cpp
//  CISP 301 Lab Assignment No 2 Distance
//
//  Created by Yusef on 2/26/21.
//

#include <iostream>
using namespace std;

int main()
{
    const int speed = 60;
          int distance,
              time1 = 5,
              time2 = 8,
              time3 = 12;
    
    // Program to develop
    cout << "A car is traveling at a constant\n"
         << "60 miles per hour. What is the distance\n"
         << "the car will travel in 5 hours, 8 hours\n"
         << "and 12 hours? " << endl;
    
    // Calculate and display
    distance = speed * time1;
    cout << "\nA car traveling at this rate for 5 hours will travel\n"
         << distance << " miles." << endl;
    
    distance = speed * time2;
    cout << "\nA car traveling at this rate for 8 hours will travel\n"
         << distance << " miles." << endl;
    
    distance = speed * time3;
    cout << "\nA car traveling at this rate for 12 hours will travel\n"
         << distance << " miles." << endl;
    
    cout << "\n";
    
return 0;
}
