//  CISP 400: Lab Assignment No. 6
//
//  Programming Exercise No. 15
//
//  Order Status
//
//  Created by Yusef on 5/4/21

#include <iostream>
#include <string>
using namespace std;

// Car Class definition
class Order
{
    private:
    int Num_Ordered;
    int In_Stock;
    int Ex_Shipping;
    
    public:
    Order(int, int, int);
    void setOrder(int, int, int);
    void getTotals();
    int Spool_Costs;
    int Shipping_Costs = 10;
    int Final_Amount;
    int Back_Order;
};

// Order class constructor
Order::Order(int n, int i, int e)
{   Num_Ordered = n;
    In_Stock = i;
    Ex_Shipping = e;
}

// Functions defs for Order class
void Order::setOrder(int n, int i, int e)
{
    Num_Ordered = n;
    In_Stock = i;
    Ex_Shipping = e;
    
    cout << "\n_____ PURCHASE SUMMARY _____ ";
    cout << "\n\nNumber of spools ordered are: " << Num_Ordered << endl;
    cout << "Number of spools in stock are: " << In_Stock << endl;
    cout << "Amount of special shipping and handling charges are: $" << Ex_Shipping << endl;
}

void Order::getTotals()
{
    Spool_Costs = Num_Ordered * 100;
    Shipping_Costs = Shipping_Costs + Ex_Shipping;
    Final_Amount = Spool_Costs + Shipping_Costs;
    if (Num_Ordered > In_Stock)
        Back_Order = Num_Ordered - In_Stock;
    
    cout << "\n______ PURCHASE ORDER TOTALS _____ ";
    cout << "\n\nCost of spools are: $" << Spool_Costs << endl;
    cout << "Price of shipping is: $" << Shipping_Costs << endl;
    cout << "Final purhase amount is: $" << Final_Amount << endl;
    cout << "Amount of spools on back order are: " << Back_Order << endl;
    cout << "\n";
}

int main()
{
    int spoolsOrd,
        spoolStk,
        xshipFee;
    
    cout << "_____ ORDER INFORMATION _____ " << endl;
   
    // Get the amount of spools ordered
    cout << "\nHow many spools were ordered? " ;
    cin >> spoolsOrd;
    
    // Get the amount of spools in stock
    cout << "How many spools are in stock? ";
    cin >> spoolStk;
    
    // Get the extra shipping fees
    cout << "What is the amount of extra shipping fees? $";
    cin >> xshipFee;
    
    // Create an Order object
    Order newPurchase(spoolsOrd, spoolStk, xshipFee);
    
    // Display order
    newPurchase.setOrder(spoolsOrd, spoolStk, xshipFee);
    
    // Calculate and display totals
    newPurchase.getTotals();
    
    return 0;
}
