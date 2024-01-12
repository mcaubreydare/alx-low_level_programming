#include "main.h"
/**
 * _isdigit - the funtion
 * Descrption: the function check for digit from 0-9
 * @c: the place holder
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
