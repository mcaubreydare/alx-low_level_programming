#include "main.h"
/**
 * *_strcat - main function that concatenate
 * @dest: first parameter
 * @src: second paramater
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
