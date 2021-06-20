//  CISP 301: Lab Assignment No. 8
//
//  Programming Exercise No. 3
//
//  Rainfall Statistics
//
//  Created by Yusef on 5/2/21.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_MONTHS = 12;
    int Months [ NUM_MONTHS ];
    double Total_Rainfall,
           Average_Rainfall,
           Highest_Rainfall,
           Lowest_Rainfall;
    int count;
    
    // Input inches fallen for each month
    for (count = 0; count < NUM_MONTHS; count ++)
    {
        cout << "Enter the rainfall for month "
             << (count + 1) << " : ";
        cin  >> Months [count];
    }
    
    // Get total rainfall for year
    Total_Rainfall = 0;
    for (int count = 0; count < NUM_MONTHS; count ++)
         Total_Rainfall += Months [count];
    
    // Get average rainfall for year
    Average_Rainfall = Total_Rainfall / NUM_MONTHS;
    
    // Get Highest rainfall for year
    Highest_Rainfall = Months [0];
    for (count = 1; count < NUM_MONTHS; count ++)
    {
        if (Months [count] > Highest_Rainfall)
        Highest_Rainfall = Months [count];
    }
    
    // Get Lowest rainfall for year
    Lowest_Rainfall = Months [0];
    for (count = 1; count < NUM_MONTHS; count ++)
    {
        if (Months[count] < Lowest_Rainfall)
            Lowest_Rainfall = Months [count];
    }
    
    cout << fixed << showpoint << setprecision(1);
    cout << "\nThe total rainfall for the year is: " << Total_Rainfall << " inches" << endl;
    cout << "\nThe average rainfall for the year is: " << Average_Rainfall << " inches" << endl;
    cout << "\nThe highest rainfall for the year is: " << Highest_Rainfall << " inches" << endl;
    cout << "\nThe lowest rainfall for the year is: " << Lowest_Rainfall << " inches" << endl;
    cout << endl;

    return 0;
}
