#include <stdio.h>
#include <limits.h>
/**
 *  main - print the string in the put funcion
 *
 *  Description: using the main function
 *
 *  this program prints "Programming is like building a multilingual puzzle
 *  Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
