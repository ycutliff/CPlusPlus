//  main.cpp
//  Lab Assignment No 1 Rectangle
//  Created by Yusef on 2/26/21
//  This program calculates area and perimeter for a user:

#include <iostream>
using namespace std;

int main()
{
    int length, width, area, perimeter;
    
    // Get the length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    // Compute and display area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;
    return 0;
}

