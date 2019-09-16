/*
// Get the addition of even numbers between 0 and 100

#include <stdio.h>
#define MAX 100

int main(void)
{
	int total = 0;

	for (int evenN = 0; evenN <= MAX; evenN++)
	{
		if (evenN % 2 == 0)
		{
			total += evenN;
		}
	}
	printf("Total : %d\n", total);

	system("pause");
	return 0;
}
*/

// By the way, I don't know how to express (3 or 6 or 9) or shorten this code.. I have to ask JikSoo for this.. Review 'Selection' Part!!!

#include <stdio.h>
#define MAX 100

int main(void)
{
	int total = 0;

	for (int evenN = 0; evenN <= MAX; evenN++)
	{
		if (evenN % 10 == 3)
		{
			total += evenN;
		}
		if (evenN % 10 == 6)
		{
			total += evenN;
		}
		if (evenN % 10 == 9)
		{
			total += evenN;
		}
	}
	printf("Total : %d\n", total);

	system("pause");
	return 0;
}