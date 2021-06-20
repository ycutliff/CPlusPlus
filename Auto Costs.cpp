// This program calculates monthly and yearly auto costs.
//  main.cpp
//  CISP 301 Lab No 3 Auto Costs
//
//  Created by Yusef on 2/27/21
//

#include <iostream>
using namespace std;

//Function Prototypes
void showSumMo(double num1, double num2, double num3, double num4, double num5, double num6);
void showSumYr(double num1, double num2, double num3, double num4, double num5, double num6);

int main()
{
    double loanPayment,
           insurance,
           maintenance,
           gas,
           oil,
           tires;
   
    //Get monthly spending from user.
    cout << "What is your loan payment per month?: $";
    cin >> loanPayment;
    
    cout << "What is your insurance payment per month?: $";
    cin >> insurance;
    
    cout << "What are your monthly maintenance costs?: $";
    cin >> maintenance;
    
    cout << "How much do you spend on gas per month?: $";
    cin >> gas;
    
    cout << "How much is your oil change costs per month?: $";
    cin >> oil;
    
    cout << "What is your monthly tire maintenance?: $";
    cin >> tires;
    
    cout << "----------------------------------------------------" << endl;
    
    // Show monthly and yearly totals.
    showSumMo(loanPayment, insurance, maintenance, gas, oil, tires);
    showSumYr(loanPayment, insurance, maintenance, gas, oil, tires);
    return 0;
}

void showSumMo(double num1, double num2, double num3, double num4, double num5, double num6)
{
    cout << "Your monthly auto costs are: $" << (num1 + num2 + num3 + num4 + num5 + num6) << endl;
}

void showSumYr(double num1, double num2, double num3, double num4, double num5, double num6)
{
    cout << "Your yearly auto costs are: $" << ((num1 + num2 + num3 + num4 + num5 + num6) * 12) << endl;
}
