#include "main.h"
/**
 * print_alphabet_x10 -  to print alphabet 10x
 * Return: void on success
 */
void print_alphabet_x10(void)
{
	char i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar ('\n');
	}
}
