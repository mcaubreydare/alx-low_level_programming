#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - function to check positive or negative
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
		printf("is zero\n");
	return (0);
}
