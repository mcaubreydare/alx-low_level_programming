#include <stdio.h>
/**
 * main - using pucher to print in base 16
 * Return: 0 on success
 */
int main(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
