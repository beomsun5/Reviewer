// This program gets student number from the keyboard and show the addition of all digitis of student numbers.

#include <stdio.h>

int firstdigit(int stdnumber);
int seconddigit(int stdnumber);
int thirddigit(int stdnumber);
int fourthdigit(int stdnumber);
int fifthdigit(int stdnumber);
int sixthdigit(int stdnumber);
int seventhdigit(int stdnumber);
int eighthdigit(int stdnumber);
int ninthdigit(int stdnumber);
int tenthdigit(int stdnumber);
int getTotal(int stdnumber);

int main(void)
{
	int stdnumber = 0;
	int total = 0;

	printf("ID : ");
	scanf_s("%d", &stdnumber);
	total = getTotal(stdnumber);
	printf("\n\nTotal : %d\n", total);

	system("pause");
	return 0;
}

int getTotal(int stdnumber)
{
	int total = 0;

	total = firstdigit(stdnumber) + seconddigit(stdnumber) + thirddigit(stdnumber) + fourthdigit(stdnumber) + fifthdigit(stdnumber) + sixthdigit(stdnumber) + seventhdigit(stdnumber) + eighthdigit(stdnumber) + ninthdigit(stdnumber) + tenthdigit(stdnumber);

	return total;
}
int firstdigit(int stdnumber)
{
	int first = stdnumber / 1000000000;
	return first;
}
int seconddigit(int stdnumber)
{
	int second = stdnumber % 1000000000;
	return (second / 100000000);
}
int thirddigit(int stdnumber)
{
	int third = stdnumber % 100000000;
	return (third / 10000000);
}

int fourthdigit(int stdnumber)
{
	int fourth = stdnumber % 10000000;
	return (fourth / 1000000);
}
int fifthdigit(int stdnumber)
{
	int fifth = stdnumber % 1000000;
	return (fifth / 100000);
}
int sixthdigit(int stdnumber)
{
	int sixth = stdnumber % 100000;
	return (sixth / 10000);
}
int seventhdigit(int stdnumber)
{
	int seventh = stdnumber % 10000;
	return (seventh / 1000);
}
int eighthdigit(int stdnumber)
{
	int eigth = stdnumber % 1000;
	return (eigth / 100);
}
int ninthdigit(int stdnumber)
{
	int ninth = stdnumber % 100;
	return (ninth / 10);
}
int tenthdigit(int stdnumber)
{
	return (stdnumber % 10);
}