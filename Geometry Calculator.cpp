//  CISP 301: Lab Assignment No. 11
//
//  Programming Exercise No. 3
//
//  Geometry Calculator
//
//  Created by Yusef on 5/3/21.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showMenu();
void showCircle();
void showRectangle();
void showTriangle();

int main()
{
    int choice;
    
    // Constants for the menu choice
    const int Area_Circle    = 1,
              Area_Rectangle = 2,
              Area_Triangle  = 3,
              Quit_Program   = 4;
    
    // Set up numeric output formatting
    cout << fixed << showpoint << setprecision(2);
    
    do
    {
        // Display the menu and get the user's choice
        showMenu();
        cin >> choice;
        
        // Validate the menu selection
        while (choice < Area_Circle || choice > Quit_Program)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }
        
        // If the user does not want to quit, proceed
        if (choice != Quit_Program)
        {
            // Display the calculation choices
            switch (choice)
            {
                case Area_Circle:
                     showCircle();
                     break;
                case Area_Rectangle:
                     showRectangle();
                     break;
                case Area_Triangle:
                     showTriangle();
            }
        }
    } while (choice != Quit_Program);
    return 0;
}

// Definition of Function showMenu
void showMenu()
{
    cout << "\n\t\tGeometry Calculator Program Menu\n\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Quit the Program\n\n"
         << "Enter your choice: ";
}

// Definition of Function showCircle
void showCircle()
{
    const double PI = 3.14159;
    double radius;
    double area;
    
    cout << "Enter the Radius of the Circle: ";
    cin >> radius;
    area = PI * radius;
    cout << "\nThe area of the Circle is: " << area << endl;
}

// Definition of Function showRectangle
void showRectangle()
{
    double length;
    double width;
    double area;
    
    cout << "Enter the width of the Rectangle: ";
    cin >> width;
    cout << "Enter the length of the Rectangle: ";
    cin >> length;
    area = length * width;
    cout << "\nThe area of the Rectangle is: " << area << endl;
}

// Definition of Function showTriangle
void showTriangle()
{
    double base;
    double height;
    double area;
    
    cout << "Enter the base of the Triangle: ";
    cin >> base;
    cout << "Enter the height of the Triangle: ";
    cin >> height;
    area = base * height * .5;
    cout << "\nThe area of the Triangle is: " << area << endl;
}
