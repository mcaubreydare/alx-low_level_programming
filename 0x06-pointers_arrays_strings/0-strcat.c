#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)

{

	int destlen  = 0;
	int srclen = 0;
	int s;

	for (s = 0; dest[s] != '\0' ; s++)
		destlen++;
	for (s = 0; src[s] != '\0' ; s++)
		srclen++;
	for (s = 0; s <= srclen ; s++)
		dest[destlen + s] = src[s];
	return (dest);








}


