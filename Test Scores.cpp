//Lab No. 9, Challenge No. 2: Test Scores
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int *scores = nullptr,
		total = 0.0,
		average;
	int testScores,
		count;

	cout << "How many scores would you like to add? ";
	cin >> testScores;

	scores = new int[testScores];

	cout << "Enter the scores below. \n";

	for (count = 0; count < testScores; count++)
	{
		cout << "Finals " << (count + 1) << ": ";
		cin >> scores[count];
	}

	for (count = 0; count < testScores; count++)
	{
		total += scores[count];
	}

	average = total / testScores;

	cout << "\n\nTotal Scores: " << total << endl;
	cout << "Average Scores: " << average << endl;

	delete[] scores;
	scores = nullptr;

	return 0;
}