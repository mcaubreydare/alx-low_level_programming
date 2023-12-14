#include <stdio.h>
/**
 * main - printf function to print size
 * Return: 0 on success
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(b));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
