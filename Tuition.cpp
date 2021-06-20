// CISP 301 Lab 5 Tuition:
//
// At one college, the tuition for a full-time student is
// $6000 per semester. It has been announced that the tution
// will increase by 2 percent each year for the next five years.
//
// Design a program with a loop that displays the projected
//
//  Created by Yusef on 2/27/21.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double tuition = 6000;                // Cost of tuition
    double tuInc = 0.02;                        // For tuition increase
    int semester = 1;                           // To increment semester
    int year;                                   // To increment years

    // Loop for years
    for (year = 1; year <= 5; year++)
    {
        //Display and Calculate
        cout << "Tuition for Year: " << year << "  ";
        cout << "$" << tuition + tuition * tuInc * semester << endl;
        semester++;
    }
    return 0;
}
