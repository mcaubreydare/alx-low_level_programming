#include <stdio.h>
/**
 * main - function is to print using putchar
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar (num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
