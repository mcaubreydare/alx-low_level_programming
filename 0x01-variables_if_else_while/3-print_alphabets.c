#include <stdio.h>
/**
 * main - to print using putchar
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar ('\n');
	return (0);
}
