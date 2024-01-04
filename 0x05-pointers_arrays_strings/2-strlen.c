#include "main.h"
/**
 * _strlen - function name
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int lon;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	return (lon);
}
