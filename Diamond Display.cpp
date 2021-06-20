//  Lab Assignment No 5
//  Programming Challenge No 23: Diamond Display
//
//  Created by Yusef on 3/29/21

#include <iostream>
using namespace std;

int main()
{
    
int  row;
char plus;
    
    for  (row = 0; row < 1; row++)
    {   for (plus = 0; plus < 1; plus++)
            cout << "         " << '+' << endl;
            cout << "        " << '+' << '+' << '+' << endl;
            cout << "       " << '+' << '+' << '+' << '+' << '+' << endl;
            cout << "      " << '+' << '+' << '+' << '+' << '+' << '+' << '+' << endl;
            cout <<        "       " << '+' << '+' << '+' << '+' << '+' << endl;
            cout <<         "        " << '+' << '+' << '+' << endl;
            cout <<          "         " << '+' << endl;
    }
        cout << endl;
        
        return 0;
}
