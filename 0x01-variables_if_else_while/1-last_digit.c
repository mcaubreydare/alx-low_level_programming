#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function is to pointlast number of n
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int ld = 0;

	srand(time(0));
	n = rand() - (RAND_MAX / 2);
	ld = abs(n % 10);
	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
		 printf("last digit of %d is %d and is 0\n", n, ld);
	return (0);
}
