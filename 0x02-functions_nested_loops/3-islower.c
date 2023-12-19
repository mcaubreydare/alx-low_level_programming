#include "main.h"
/**
 *  _islower - to check if c is a lowercase
 * Description: function that checks lower character
 * @c: character to check if it islower case
 * Return: 0 if it is lower and 1 if not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
