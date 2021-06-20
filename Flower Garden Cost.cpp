//  CISP 400 Lab No 1. Programming Challenge No 4: Flower Garden Cost
//
//  Write a program that calculates how much the nature center spent to make the flower
//  display described in the previous problem.  The program should prompt the user to
//  enter the cost of the soil, the flower seeds, and the fence. It should also calculate
//  and display the total amount spent.
//
//  Flower Garden Cost: created by Yusef on 3/27/21.
//

#include <iostream>
using namespace std;

int main()
{
    double bag_soil = 12.90,
           bag_seeds = 7.85,
           fence_pft = 15.00,
           total_soil,
           total_seeds,
           total_fence,
           total_cost;
    
    int    soil,
           seeds,
           fence;
    
    // Get amount of soil
    cout << "The price of soil is $12.90 per bag. \n";
    cout << "How many bags of soil do you need to purchase? \n";
    cin >> soil;
    total_soil = bag_soil * soil;
    
    // Get amount of seeds
    cout << "\nThe price of seeds is $7.85 per bag. \n";
    cout << "How many bags of seeds do you need to purchase? \n";
    cin >> seeds;
    total_seeds = bag_seeds * seeds;
    
    // Get amount of fence
    cout << "\nThe price of fencing is $15.00 per foot. \n";
    cout << "How much fencing do you need to purchase? \n";
    cin >> fence;
    total_fence = fence_pft * fence;
    
    total_cost = total_soil + total_seeds + total_fence;
    cout << "\nThe amount of money you will need to spend to complete your "
         << "project will cost: $" << total_cost << endl;
    
    return 0;
}
