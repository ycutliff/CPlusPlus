
// This program calculates the volume of a sphere.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double volume, radius;

	cout << "This program calculates the volume of a sphere .\n";
	cout << "What is the radius of the sphere? ";
	cin >> radius;
	volume = PI * (4.0/3.0) * pow(radius, 3.0);
	cout << "The volume is " << volume << endl;
	return 0;
}



*******************************************************************


// This program calculates the area of a sphere.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double area, radius;

	cout << "This program calculates the area of a sphere .\n";
	cout << "What is the radius of the sphere? ";
	cin >> radius;
	area = PI * pow(4.0, radius, 2.0);
	cout << "The area is " << area << endl;
	return 0;
}