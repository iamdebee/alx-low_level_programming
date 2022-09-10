#include <stdio.h>

int main()
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
