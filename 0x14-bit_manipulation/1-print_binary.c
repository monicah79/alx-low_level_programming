#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
        unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
        int leading_zeros = 1;

        if (n == 0)
        {
                _putchar('0');
                return;
        }

        while (mask > 0)
        {
                if (n & mask)
                        leading_zeros = 0;

                if (!leading_zeros)
                        _putchar('1');
                else if (leading_zeros == 0)
                        _putchar('0');

                mask >>= 1;
        }
}
