//  CISP 301: Lab Assignment No. 7
//
//  Programming Example No. 1
//
//  Payroll Program with Input Validation
//
//  Created by Yusef on 5/1/21.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    int hoursWorked;
    double payRate,
           grossPay;
    
    // Get employees hours worked
    cout << "Enter the number of hours worked by employee: ";
    cin >> hoursWorked;
    
    // Validate hours worked
    while (hoursWorked < 0 || hoursWorked > 40)
    {
        cout << "\nThat is an invalid value. Run the program\n"
             << "again and enter a value in the range of\n"
             << "0 through 40. " << endl;
        
        cout << "\nEnter the number of hours worked by employee: ";
        cin >> hoursWorked;
    }
    
    // Get employees pay rate
    cout << "\nEnter the employees pay rate: $";
    cin >> payRate;
    
    // Validate pay rate
    while (payRate < 7.50 || payRate > 18.25)
    {
        cout << "\nThat is an invalid value. Run the program\n"
             << "again and enter a value in the range of\n"
             << "$7.50 through $18.25. " << endl;
        
        cout << "\nEnter the employees pay rate: $";
        cin >> payRate;
    }
    
    // Calculate gross pay
    grossPay = payRate * hoursWorked;
    
    // Display gross pay
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe employees gross pay is: $" << grossPay << endl;
    cout << endl;
    
    return 0;
}
