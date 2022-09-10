#include <stdio.h>

int main()
{
	int tens, unit, k;

	k = '1';
	for (tens = '0''; tens <= '8'; tens++)
	{
		for (unit = 'k'; unit <= '9'; units++)
		{
			putchar(tens);
			putchar(units);
			if (tens == '0' && units == '9')
				break;
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	return (0);
}
