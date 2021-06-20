// Ocean Level Lab Assignment II

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double _oceanLevel = 1.5;

	cout << "The ocean's current level is "
		<< _oceanLevel << "millimeters." << endl;
	cout << "In 5 years, the ocean's level will be "
		<< (_oceanLevel * 5) << " millimeters higher "
		<< "than the current level." << endl;
	cout << "In 7 years, the ocean's level will be " 
		<< (_oceanLevel * 7) << " millimeters higher "
		<< "than the current level." << endl;
	cout << "In 10 years, the ocean's level will be "
		<< (_oceanLevel * 10) << " millimeters higher"
		<< "than the current level." << endl;

	return 0;
}