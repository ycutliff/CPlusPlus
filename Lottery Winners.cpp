//  CISP 400: Lab Assignment No. 9
//
//  Programming Challenge No. 15
//
//  Lottery Winners
//
//  Created by Yusef on 5/9/21

#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main()
{
    const int array = 10;
    int Lotto_Nums [array] = {13579, 26791, 26792, 334445, 55555,
                              62483, 77777, 79422, 85647, 93121};
    int Lucky_Nums;
    
    // Search the array
    Lucky_Nums = linearSearch(Lotto_Nums, array, 77777);
    
    // If the linearSearch returned -1, then 77777 was not found
    if (Lucky_Nums == -1)
        cout << "Sorry you are not a winner. Thanks for playing.\n";
    else
    {
        // Otherwise results contains the subscript of the the
        // first 77777 in the array.
        cout << "Congratulations you've won $1000!\n";
    }
    return 0;
}

// Linear search function definition
int linearSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < size && !found)
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index ++;
    }
    return position;
}
