//NO-WAY would I have been able to do this challenge without
//the assistance of: https:jesushilarioh.com
//This challenge was pretty complex, I made modifications where
//I understood, as I used the textbook also... but I need a lot
//more practice to develop and understand a program like this!
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string student,
		   front,
		   rear;

	const int MIN_STUDENTS = 1,
		      MAX_STUDENTS = 25;

		  int numberofStudents;

	cout << "Enter number of students in class: ";

	while (!(cin >> numberofStudents) ||
		(numberofStudents < MIN_STUDENTS || numberofStudents > MAX_STUDENTS))
	{
		cout << "You should have at least " << MIN_STUDENTS
			 << " but no more than " << MAX_STUDENTS << " per class.\n";
		cin.clear();
		cin.ignore(123, '\n');
	}
		

		cout << "Enter the name of the first student: ";
		cin >> student;

		front = rear = student;

		if (student < front)
			front = student;

		if (student > rear)
			rear = student;

		for (int num = 1; num < numberofStudents; ++num)
		{
			cout << "Enter the name of student No."
				<< (num + 1) << ": ";
			cin >> student;

			if (student < front)
				front = student;

			if (student > rear)
				rear = student;
		}

		cout << "Student in the front of the line = "
			<< front << endl;

		cout << "Student at the rear of the line = "
			<< rear << endl;
		
		return 0;
}