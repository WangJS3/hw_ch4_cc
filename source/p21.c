#include<stdio.h>
#include<stdlib.h>

void ststicArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	printf("First call to each function:\n");
	ststicArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	ststicArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}

void ststicArrayInit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArrayInit:\n");

	for(i = 0; i <= 2; i++)
	{
		printf("array1[%d]=%d", i, array1[i]);
	}

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d]=%d", i, array1[i]+=5);
	}
}

void automaticArrayInit(void)
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues of entering automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d]=%d", i, array2[i]);
	}

	printf("\n\nValues of exiting automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d]=%d", i, array2[i]+=5);
	}
}