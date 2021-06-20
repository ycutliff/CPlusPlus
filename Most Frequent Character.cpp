//  CISP 301: Lab Assignment No. 12
//
//  Programming Exercise No. 5
//
//  Most Frequent Character
//
//  Created by Yusef on 5/3/21

#include <iostream>
using namespace std;

int countChars(char *, char);

int main()
{
    const int SIZE = 51;
    char userString[SIZE];
    char letter;
    
    // Get a string from the user
    cout << "Input a sentence (up to 50 characters): \n";
    cin.getline(userString, SIZE);
    
    // Choose a character whose occurences withing the sentence will be counted
    cout << "\nEnter a character (from your sentence) and I will tell you\n";
    cout << "how many times the character appears in your sentence.: ";
    cin >> letter;
    
    // Display the number of times the character appears
    cout << letter << " appears ";
    cout << countChars(userString, letter) << " times.\n";
    cout << endl;
    return 0;
}

// Function definition for countChars
int countChars(char *strPtr, char ch)
{
    int times = 0;
    
    // Step through the string to count occurences
    while (*strPtr != '\0')
    {
        if (*strPtr == ch)
            times++;
        strPtr++;
    }
    
    return times;
}
