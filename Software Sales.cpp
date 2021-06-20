#include <iostream>
using namespace std;

int main()
{
	//Constants for discounts
	const int A_Quantity = 100,
		      B_Quantity = 50,
		      C_Quantity = 20,
		      D_Quantity = 10,
		      Min_Quantity = 10;

	int unitQuantity; // To hold units sold

	cout << "Enter the amount of units purchased and I will\n";
	cout << "tell you the discount earned: ";
	cin >> unitQuantity;

	if (unitQuantity >= A_Quantity)
	{
		cout << "Your discount is 50%.\n";
	}
	else
	{
		if (unitQuantity >= B_Quantity)
		{
			cout << "Your discount is 40%.\n";
		}
		else
		{
			if (unitQuantity >= C_Quantity)
			{
				cout << "Your discount is 30%.\n";
			}
			else
			{
				if (unitQuantity >= D_Quantity)
				{
					cout << "Your discount is 20%.\n";
				}
				else
				{
					if (unitQuantity < Min_Quantity)
					{
						cout << "You are not eligible for a discount.\n";
					}
				}
			}
		}

	}
	return 0;
}