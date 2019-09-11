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

	switch (testscore)
	{
	case 10:
	case 9: grade = 'A';
		break;
	case 8: grade = 'B';
		break;
	case 7: grade = 'C';
		break;
	case 6: grade = 'D';
		break;
	default: grade = 'F';
	} // switch
	return grade;
}

// Function zeroone

char addition(int score)
{
	// Local Declaration
	int zeroone;
	char pluszero;
	int score2;

	// Statement
	zeroone = score % 10;
	score2 = score / 10;

	switch (zeroone)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		pluszero = '0';
		break;
	default:
		pluszero = '+';
	}
	switch (score) case 100: pluszero = '+';
	switch (scoreToGrade(score)) case 'F': pluszero = ' ';

	return pluszero;
}