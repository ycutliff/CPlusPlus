//  CISP 301: Lab Assignment No. 9
//
//  Programming Exercise No. 1
//
//  Sorted Golf Scores
//
//  Created by Yusef on 5/2/21.

#include <iostream>
using namespace std;

// Function prototypes
void bubbleSort(int [], int);
void swap(int &, int &);

int main()
{
    int GOLF_SCORES = 10;
    int Scores [GOLF_SCORES];
    int count;
    
    // Input player scores
    for (count = 0; count < GOLF_SCORES; count++)
    {
        cout << "Enter scores for each game "
             << (count + 1) << ": ";
        cin >> Scores[count];
    }
    
    // Display unsorted array of scores
    cout << "\nThe unsorted array of scores are: \n";
    for (auto element : Scores)
        cout << element << " ";
    cout << endl;
    
    // Sort the array
    bubbleSort(Scores, GOLF_SCORES);
    
    // Display sorted array of scores
    cout << "\nThe sorted array of scores are: \n";
    for (auto element: Scores)
        cout << element << " ";
    cout << endl;
    cout << endl;
    
    return 0;
}

// Bubble Sort Function
void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;
    
    for (maxElement = size - 1; maxElement > 0; maxElement --)
    {
        for (index = 0; index < maxElement; index ++)
        {
            if(array[index] > array[index + 1])
            {
                swap(array[index], array[index +1 ]);
            }
        }
    }
}

// Swap Function
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
