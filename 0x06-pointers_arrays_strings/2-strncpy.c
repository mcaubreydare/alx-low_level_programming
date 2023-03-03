#include "main.h"



/**
 * _strncpy - function that copies a string.
 * @dest : destination string
 * @src: source string
 * @n: count of strings
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)


{

	int g;

	for (g = 0; g < n; g++)
		dest[g] = src[g];
	return (dest);








}
