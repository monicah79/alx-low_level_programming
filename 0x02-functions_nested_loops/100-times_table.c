#include "main.h"
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int i = 0; i <= 10; i++)
	{
		int result = i * n;
		int divisor = 10;
		
		if (result > 9)
		{
			divisor = 100;
		}
		if (result > 99)
		{
			divisor = 1000;
		}
		putchar(i + '0');
		putchar(' ');
		putchar('x');
		putchar(' ');
		putchar(n + '0');
		putchar(' ');
		putchar('=');
		putchar(' ');
		if (result == 0)
		{
			putchar('0');
		} else
		{
			while (divisor > 0) {
                int digit = result / divisor;
                putchar(digit + '0');
                result -= digit * divisor;
                divisor /= 10;
            }
        }
        putchar('\n');
    }
}
