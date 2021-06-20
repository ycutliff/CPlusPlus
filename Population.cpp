//Completion of this challenge would not have been
//possible w/o the guidance from https://jesushilarioh.com/
//I struggled w/ lines 50 - 64, however I made gains
//in better understanding the while loop for data validation.
#include <iostream>
using namespace std;

double calcofPopulation(double, double, double);

int main()
{
	double P, // previous population size
		BP, // birth rate
		DP, // death rate
		num_years;

	cout << "What is the starting size of the population: ";
	cin >> P;
	while (P < 2)
	{
		cout << "Error: Enter a value that is at least 2 or greater: ";
		cin >> P;
	}

	cout << "What is the annual birth rate as a percentage?";
	cin >> BP;
	while (BP < 0)
	{
		cout << "Error: Negative values are not allowed: ";
		cin >> BP;
	}

	cout << "What is the annual death rate as a percentage?";
	cin >> DP;
	while (DP < 0)
	{
		cout << "Error: Negative numbers are not allowd: ";
		cin >> DP;
	}

	cout << "Number of years to display: ";
	cin >> num_years;
	while (num_years < 1)
	{
		cout << "Error: Enter a value that is at least 1 or greater: ";
		cin >> num_years;
	}



	cout << "The population size for "
		<< num_years << " years "
		<< " = "
		<< (calcofPopulation(P, BP, DP) * num_years)
		<< endl;

	return 0;
}

double calcofPopulation(double P, double BP, double DP)
{
	BP *= .01;
	DP *= .01;

	return P + (BP * P) - (DP * P);
}