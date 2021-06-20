//  CISP 400: Lab Assignment No 2
//  Programming Challenge No 15: Video Game Levels
//
//  A novice player needed 78 minutes to complete Level 1
//  and 144 minutes to complete Level 2 of a video game.
//
//  Write a program that computes and displays in hours and
//  minutes, the amount of time each level took and that
//  tells how much longer it took the player to complete Level 2
//  than Level 1.
//
//  Created by Yusef on 3/27/21.

#include <iostream>
using namespace std;

int main()
{
    int    level_1 = 78,
           level_2 = 144;
    
    int    hours_1,
           hours_2,
           minutes_1,
           minutes_2,
           hours,
           minutes;
    
    // Calculate the number of hours for Level 1 and Level 2
    hours_1 = level_1 / 60;
    hours_2 = level_2 / 60;
    
    // Calculate the remaining minutes for Level 1 and Level 2
    minutes_1 = level_1 % 60;
    minutes_2 = level_2 % 60;
    
    // Display the amount of hours spent on eah level
    cout << "The amount of time spent on Level 1 was: " << hours_1 << " hours"
         << " and " << minutes_1 << " minutes." << endl;
    cout << "The amount of time spent on Level 2 was: " << hours_2 << " hours"
         << " and " << minutes_2 << " minutes." << endl;
    
    // Calculate the difference
    hours = hours_2 - hours_1;
    minutes = minutes_2 - minutes_1;
    
    // Display the difference
    cout << "\nThe time difference it took you to complete Level 2 than Level 1 is: \n"
         << hours << " hours and " << minutes << " minutes." << endl;

    return 0;
}
