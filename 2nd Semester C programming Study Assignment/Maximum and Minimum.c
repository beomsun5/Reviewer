/*
// Get 5 numbers and show the biggest number.
#include <stdio.h>

int main(void)
{
	int num = 0;
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("Number : ");
		scanf_s("%d", &num);
		printf("\n");
		if (num > max)
		{
			max = num;
		}
	}
	printf("Max : %d\n", max);

	system("pause");
	return 0;
}
*/

/*
// This program gets 5 numbers from a user and shows the list of numbers in an increasing order.
#include <stdio.h>

int main(void)
{
	int num[5] = { 0 };
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("Number : ");
		scanf_s("%d", num + i);
		printf("\n");
	}
// Making the list of numbers in an increasing order.
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i < j) && (*(num + i) > *(num + j)))
			{
				temp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = temp;
			}
			else if ((i > j) && (*(num + i) < *(num + j)))
			{
				temp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = temp;
			}
		}
	}
// Showing the list of numbers in an increasing order.
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(num + i));
	}
	system("pause");
	return 0;
}
*/


//This program gets 5 numbers from a user and shows the list of them in a decreasing order. Furthermore, it shows the rank of it.
#include <stdio.h>

int main(void)
{
	int num[5] = { 0 };
	int temp = 0;
	int rankOrder[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		printf("Number : ");
		scanf_s("%d", num + i);
		printf("\n");
	}
	// Making the list of the numbers in a decreasing order
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i > j) && (*(num + i) > *(num + j)))
			{
				temp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = temp;
			}
			else if ((i < j) && (*(num + i) < *(num + j)))
			{
				temp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = temp;
			}
		}
	}
	
	// Making the list of ranks of each number
	rankOrder[0] = 1;
	temp = 0;
	for (int rank = 1; rank <= 5; rank++)
	{
		if (*(num + rank - 1) > *(num + rank))
		{
			rankOrder[rank] = rankOrder[rank - 1] + 1 + temp;
			temp = 0;
		}
		else if (*(num + rank - 1) = *(num + rank))
		{
			rankOrder[rank] = rankOrder[rank - 1];
			temp += 1;
		}
	}
	
	// Showing the list of numbers in a decreasing order and ranks of them.
	printf("Score Data :");
	for (int i = 0; i < 5; i++)
	{
		printf("%-2d ", *(num + i));
	}
	printf("\nRank Data :");
	for (int i = 0; i < 5; i++)
	{
		printf("%-2d ", *(rankOrder + i));
	}
	system("pause");
	return 0;
}