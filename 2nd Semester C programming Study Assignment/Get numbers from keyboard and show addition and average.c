/*
                             <N개의 숫자를 입력받아서 그 합과 평균 구하기>
N = 5일 때

#include <stdio.h>
#define N 5

int main(void)
{
	int number[] = {0};
	int total = 0;
	int average = 0;

	for (int i = 0; i < N; i++)
	{
		printf("Number : ");
		scanf_s("%d", number+i);
		printf("\n");
		total += *(number + i);
	}
	average = total / N;
	printf("Total : %d\n\n", total);
	printf("Average : %d\n\n", average);

	system("pause");
	return 0;
}

*/

// N = 30 일 때

#include <stdio.h>
#define N 30

int main(void)
{
	int number[] = { 0 };
	int total = 0;
	int average = 0;

	for (int i = 0; i < N; i++)
	{
		printf("Number : ");
		scanf_s("%d", number + i);
		printf("\n");
		total += *(number + i);
	}
	average = total / N;
	printf("Total : %d\n\n", total);
	printf("Average : %d\n\n", average);

	system("pause");
	return 0;
}