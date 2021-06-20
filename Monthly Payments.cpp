//  Lab Assignment No. 3
//  Programming Challenge No 2 Monthly Payments
//
//  Created by Yusef on 3/28/21.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double  Loan_Amt,
            Mi_Rate,
            Mo_Pymt,
            Amt_PaidBk,
            Int_Paid,
            payment,
            A,
            B;
    
    int     Num_Pymts;
    
    
    //  Get loan amount from user
    cout << "What is the amount of your loan? $ ";
    cin >> Loan_Amt;
    
    //  Get monthly payments from user
    cout << "What is the amount of your monthly interest rate? % ";
    cin >> Mi_Rate;
    
    // Get number of payments from user
    cout << "What are the number of payments for your loan? ";
    cin >> Num_Pymts;
    
    // Get monthly payment from user
    cout << "What is your monthly payment for your loan? $ ";
    cin >> Mo_Pymt;
    
    // Get amount paid back on loans
    cout << "What is the amount youve paid back on your loan? $ ";
    cin >> Amt_PaidBk;
    
    // Get interest paid back on loan
    cout << "How much interest have you paid back on your loan? $ ";
    cin >> Int_Paid;
    
    // Make calculations
    A = Mi_Rate * (1 + Mi_Rate) * Num_Pymts;
    B = (1 + Mi_Rate) * Num_Pymts - 1;
    
    payment = A / B * Loan_Amt;
    
    cout << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Loan Amount:                   $" << Loan_Amt << endl;
    cout << "Monthly Interest Rate:         "  << Mi_Rate << "%" << endl;
    cout << "Number of Payments:            "  << Num_Pymts << endl;
    cout << "Monthly Payment:               $" << Mo_Pymt << endl;
    cout << "Amount Paid Back:              $" << Amt_PaidBk << endl;
    cout << "Interest Paid:                 $" << Int_Paid << endl;
    
    // Display payment
    cout << "\nThe payment left on your loan is: $ " << payment << endl;
            
            
    
    return 0;
}
