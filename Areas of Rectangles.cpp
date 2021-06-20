//
//
//  CISP 301 Lab No 4 Areas of Rectangles
//
//  Created by Yusef on 3/8/21.
//

#include <iostream>
using namespace std;

int main()
{
    int area1,
        area2,
        width,
        length;
    
    // Get the width and length from user for rectangle 1
    cout << "What is the width of rectangle 1: ";
    cin >> width;
    cout << "What is the length of rectangle 1: ";
    cin >> length;
    cout << "\nThe area of rectangle 1 is: ";
    area1 = width * length;
    cout << area1 << endl;
    
    // Get the width and length from user for rectangle 2
    cout << "\nWhat is the width of rectangle 2: ";
    cin >> width;
    cout << "What is the length of rectangle 2: ";
    cin >> length;
    cout << "\nThe area of rectangle 2 is: ";
    area2 = width * length;
    cout << area2 << endl;
    
    // Compare the areas of the rectangles
    if (area1 == area2)
        cout << "\nThe area of the rectangles are equal.\n\n";
    else
       if (area1 < area2)
           cout << "\nThe area of rectangle 1 is less than "
                << "the area of rectangle 2.\n\n";
    else
        if (area1 > area2)
            cout << "\nThe area of rectangle 1 is greater than "
                 << "the area of rectangle 2.\n\n";
    
            
    return 0;
}
