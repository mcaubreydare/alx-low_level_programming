#include "main.h"
/**
 * print_rev - reverse order of string
 * @l: string
 * return: 0
 */
void print_rev(char *l)
{
	int len = 0;
	int o;

	while (*l != '\0')
	{
		len++;
		l++;
	}
	l--;
	for (o = len; o > 0; o--)
	{
		_putchar(*l);
		l--;
	}

	_putchar('\n');
}

