//  CISP 400: Lab Assignment No. 7
//
//  Programming Challenge No: 15
//
//  Fishing Game Simulation
//
//  Created by Yusef on 5/7/21

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Function Prototypes
void player_one();
void player_two();
void player_three();

int main()
{
    player_one();
    player_two();
    player_three();
    
    return 0;
}
    
void player_one()
{
   const int min_value = 1;
   const int max_value = 6;
   char decision;
   int die;
   int points = 0;
     
   // get system time
   unsigned seed = time(0);
    
   // seed the random number
   srand(seed);
    
    do
    {
       // roll dice
       cout << "Player One is rolling the dice...\n";
       die = (rand() % (max_value - min_value + 1)) + min_value;
            
       points += die;
            
       cout << "\nWould you like to roll the dice again? ";
       cin >> decision;
            
       while (decision == 'Y' || decision == 'y')
       {
          cout << "\nRolling the dice...\n";
          die = (rand() % (max_value - min_value + 1)) + min_value;

          cout << "\nWould you like to roll the dice again? ";
          cin >> decision;
        }
            
        if (decision == 'N' || decision == 'n')
        {
          cout << "Point(s) earned for Player One: " << points << endl;
          cout << "\nNext players turn to roll the dice.\n" << endl;
          return;
        }
    } while (decision != 'N' || decision != 'n');
}

void player_two()
{
    const int min_value = 1;
    const int max_value = 6;
    char decision;
    int die;
    int points = 0;
    
   // get system time
   unsigned seed = time(0);
   
   // seed the random number
   srand(seed);
   
       do
       {
           // roll dice
           cout << "Player Two is rolling the dice...\n";
           die = (rand() % (max_value - min_value + 1)) + min_value;
           
           points += die;
           
           cout << "\nWould you like to roll the dice again? ";
           cin >> decision;
           
           while (decision == 'Y' || decision == 'y')
           {
               cout << "\nRolling the dice...\n";
               die = (rand() % (max_value - min_value + 1)) + min_value;

               cout << "\nWould you like to roll the dice again? ";
               cin >> decision;
             }
           
           if (decision == 'N' || decision == 'n')
           {
               cout << "Point(s) earned for Player Two: " << points << endl;
               cout << "\nNext players turn to roll the dice.\n" << endl;
               return;
           }
       } while (decision != 'N' || decision != 'n');
   }

void player_three()
{
    const int min_value = 1;
    const int max_value = 6;
    char decision;
    int die;
    int points = 0;
    
   // get system time
   unsigned seed = time(0);
   
   // seed the random number
   srand(seed);
   
       do
       {
           // roll dice
           cout << "Player Three is rolling the dice...\n";
           die = (rand() % (max_value - min_value + 1)) + min_value;
           
           points += die;
           
           cout << "\nWould you like to roll the dice again? ";
           cin >> decision;
           
           while (decision == 'Y' || decision == 'y')
           {
               cout << "\nRolling the dice...\n";
               die = (rand() % (max_value - min_value + 1)) + min_value;

               cout << "\nWould you like to roll the dice again? ";
               cin >> decision;
             }
           
           if (decision == 'N' || decision == 'n')
           {
               cout << "Point(s) earned for Player Three: " << points << endl;
               cout << "\nEnd of Game. Thanks for Playing!\n" << endl;
               return;
           }
       } while (decision != 'N' || decision != 'n');
   }
