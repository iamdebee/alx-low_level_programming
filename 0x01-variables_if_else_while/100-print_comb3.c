#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0 Always (Success) 
 */
int main(void)
{
	int tens, unit, k;

	k = '1';
	for (tens = '0'; tens <= '8'; tens++)
	{
		for (unit = 'k'; unit <= '9'; unit++)
		{
			putchar(tens);
			putchar(unit);
			if (tens == '0' && unit == '9')
				break;
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
