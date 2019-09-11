/* This program reads a test score, calculates the letter

   grade for the score, and prints the grade.

	   Written by: Park Beom Soon

	   Date: 2019. 05. 20

*/

#include <stdio.h>

// Function Declaration

char scoreToGrade(int number);
char addition(int number);

int main(void)
{
	// Local Declaration

	int score;
	char grade;
	char zeroone;

	// Statement

	printf("Enter your test score: ");
	scanf_s("%d", &score);

	grade = scoreToGrade(score);
	zeroone = addition(score);

	printf("The grade is: %c%c\n", grade, zeroone);

	system("pause");
	return 0;
} // Main Function


// Function scoreToGrade
char scoreToGrade(int score)
{
	int testscore;
	char grade;

	testscore = score / 10;

	if (testscore == 10)
		grade = 'A';
	else if (testscore == 9)
		grade = 'A';
	else if (testscore == 8)
		grade = 'B';
	else if (testscore == 7)
		grade = 'C';
	else if (testscore == 6)
		grade = 'D';
	else
		grade = 'F';
	return grade;
}

// Function zeroone

char addition(int score)
{
	// Local Declaration
	int number;
	char pluszero;

	// Statement
	number = score % 10;

	if (score == 100)
		pluszero = '+';
	else if (score < 60)
		pluszero = ' ';
	else if (number >= 5)
		pluszero = '+';
	else if (number <= 4)
		pluszero = '0';


	return pluszero;
}