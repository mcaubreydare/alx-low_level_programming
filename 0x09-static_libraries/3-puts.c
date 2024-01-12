#include "main.h"
/**
 * _puts - the function to print a string
 * @str: th string parameter
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
