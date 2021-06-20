//  CISP 301 Lab No 6: Test Average and Grade
//
//  Created by Yusef on 2/27/21
//
//  Write a program that asks the user to enter five test
//  scores. The program should display a letter grade for
//  each score and the average test score.
//

#include <iostream>
#include <iomanip>
using namespace std;

void calcAverage(int num1, int num2, int num3, int num4, int num5);
void determineGrade(int num);

int main()
{
    int score1, score2, score3, score4, score5;
    int average;
    
    //get
    cout << "Enter 5 test scores: " << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    calcAverage(score1, score2, score3, score4, score5);
    
    cout << "\nEnter your test average for your grade letter: " << endl;
    cin >> average;
    determineGrade(average);
    return 0;
}

void calcAverage(int num1, int num2, int num3, int num4, int num5)
{ int average;
     
    average = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << "\nYour average score is: " << average << endl;
}

void determineGrade(int num)
{
    string grade_a = "A",
           grade_b = "B",
           grade_c = "C",
           grade_d = "D",
           grade_f = "F";
    
    // Determine grade
       if  (num >= 90 && num <= 100)
           cout << "\nYour letter grade is an: " << grade_a << endl;
       else if  ( num >= 80 && num <= 89)
           cout << "\nYour letter grade is a: " << grade_b << endl;
       else if  ( num >= 70 && num <= 79)
           cout << "\nYour letter grade is a: " << grade_c << endl;
       else if  (num >= 60 && num <= 69)
           cout << "\nYour letter grade is a: " << grade_d << endl;
       else
           cout << "\nYour letter grade is an: " << grade_f << endl;
}

