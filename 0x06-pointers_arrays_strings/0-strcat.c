#include "main.h"
/**
 * *_strcat - main function that concatenate
 * @dest: first parameter
 * @src: second paramater
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		dest++;
	}
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}
