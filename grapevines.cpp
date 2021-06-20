// Lab Assignment No. 3; Exercise No. 24, Page 29
// This program assist a vineyard owner plant rows of grapevine
#include <iostream>
using namespace std;

int main()
{
	int v, r, e, s;

	cout << "what is the length of rows in feet?";
	cin >> r;
	cout << "what is the amount of space in feet used by endpost assembly?";
	cin >> e;
	cout << "what is the space between vines in feet?";
	cin >> s;

	v = (r - 2 * e) / s;

	cout << "the amount of grapevines to plant in each row is " << v << ".\n";
	return 0;
}
