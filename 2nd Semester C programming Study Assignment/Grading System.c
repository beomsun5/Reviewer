/*
// When certain score is given, this program lets you know the grade of your score.
#include <stdio.h>

char scoreToGrade(int score);

int main(void)
{
	int score = 0;
	char grade;

	printf("Score : ");
	scanf_s("%d", &score);

	grade = scoreToGrade(score);

	printf("\n\nResult : %c\n", grade);

	system("pause");
	return 0;
}

char scoreToGrade(int score)
{
	char grade;

	switch (score/10)
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
	}

	return grade;
}
*/

// Adding '+' or not
#include <stdio.h>

char scoreToGrade(int score);
char grading(int score);

int main(void)
{
	int score = 0;
	char grade;
	char plusornot;

	printf("Score : ");
	scanf_s("%d", &score);

	grade = scoreToGrade(score);
	plusornot = grading(score);

	printf("\n\nResult : %c%c\n", grade, plusornot);

	system("pause");
	return 0;
}

char scoreToGrade(int score)
{
	char grade;

	switch (score / 10)
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
	}

	return grade;
}

char grading(int score)
{
	char plusornot;
	switch (score / 10)
	{
	case 10:plusornot = '+';
		break;
	case 9:
		switch (score % 10)
		{
		case 9:
		case 8:
		case 7:
		case 6:
		case 5: plusornot = '+';
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: plusornot = ' ';
			break;
		}
		break;
	case 8:
		switch (score % 10)
		{
		case 9:
		case 8:
		case 7:
		case 6:
		case 5: plusornot = '+';
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: plusornot = ' ';
			break;
		}
		break;
	case 7:
		switch (score % 10)
		{
		case 9:
		case 8:
		case 7:
		case 6:
		case 5: plusornot = '+';
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: plusornot = ' ';
			break;
		}
		break;
	case 6:
		switch (score % 10)
		{
		case 9:
		case 8:
		case 7:
		case 6:
		case 5: plusornot = '+';
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: plusornot = ' ';
			break;
		}
		break;
	default:
		plusornot = ' ';
	}
	return plusornot;
}

// This code is too long.. This is too inefficient. I have to consider much more effective way. 