#include <stdio.h>
#include "main.h"
/**
 * main - print_alphabet - print the alphabet in lower case
 * Return: 0 on success
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void);

{

	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
