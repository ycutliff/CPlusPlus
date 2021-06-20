//Lab No. 8, Challenge No. 10: Sorting Orders
#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void swap(int&, int&);

int main()
{
	const int SIZE1 = 8;
	const int SIZE = 8;

	int values1[SIZE1] = { 8,7,6,5,4,3,2,1 };
	int values2[SIZE] = { 5,4,3,6,7,8,1,2 };

	cout << "The unsorted values in values1 are: \n";
	for (auto element1 : values1)
		cout << element1 << " ";
	cout << endl;

	bubbleSort(values1, SIZE1);
	cout << "The unsorted values in ascending order are: \n";
	for (auto element1 : values1)
		cout << element1 << " ";
	cout << endl;

	cout << "The unsorted values in values2 are: \n";
	for (auto element2 : values2)
		cout << element2 << " ";
	cout << endl;

	bubbleSort(values2, SIZE1);
	cout << "The unsorted values in ascending order are: \n";
	for (auto element2 : values2)
		cout << element2 << " ";
	cout << endl;

	return 0;
}

void bubbleSort(int array[], int size)
{
	int maxElement1;
	int index1;

	for (maxElement1 = size - 1; maxElement1 > 0; maxElement1--)
	{
		for (index1 = 0; index1 < maxElement1; index1++)
		{
			if (array[index1] > array[index1 + 1])
			{
			swap(array[index1], array[index1 + 1]);
			}
		}
	}
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}