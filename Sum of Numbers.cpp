//  CISP 301: Lab Assignment No. 10
//
//  Programming Exercise No. 3
//
//  Sum of Numbers
//
//  Created by Yusef on 5/2/21

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int number1, number2, number3, sum;
    
    // Open an output file
    inFile.open("Numbers.txt");
    
    // Read the three numbers from file
    inFile >> number1;
    inFile >> number2;
    inFile >> number3;
    
    // Calculate the sum of the numbers
    sum = number1 + number2 + number3;
    
    // Display the three numbers
    cout << "Here are the three numbers: \n"
         << number1 << " " << number2
         << " " << number3 << endl;
    
    // Display the sum of the numbers
    cout << "The sum of the three numbers is: " << sum << endl;
    
    // Close the file
    inFile.close();
    return 0;
}
