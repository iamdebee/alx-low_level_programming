#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int a, A;

		for (a = 'a'; a <= 'z'; a++)
		{
			if (a == 'e' || a == 'q')
			{
				continue;
			}
		{
			putchar(a);
		}
		putchar('\n');
		return (0);
}
