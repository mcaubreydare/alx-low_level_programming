#include "main.h"



/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: Source string
 * @n: character count to append
 * Return: Destination string
 */

char *_strncat(char *dest, char *src, int n)


{

	int destlen = 0;
	int srclen = 0;
	int b;

	for (b = 0; dest[b] != '\0' ; b++)
		destlen++;
	for (b = 0; src[b] != '\0' ; b++)
		srclen++;
	for (b = 0; b < n; b++)
		dest[destlen + b] = src[b];
	return (dest);




}
