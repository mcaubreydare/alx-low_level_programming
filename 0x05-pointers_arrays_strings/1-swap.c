#include "main.h"
/**
 * swap_int - a function that swaps two int
 * @a: the parameter 1
 * @b: parameter 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
