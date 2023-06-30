#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - check the code
 *
 * @n1: infinate
 * @n2: return char
 * @r: return charr
 * @size_r: return int
 *
 * Return: Always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int carry = 0;
	int index = 0;
	int left, right;
	
	while (i >= 0 || j >= 0)
	{
		int temp = 0;
		if (i >= 0)
		{
			temp += (n1[i] - '0');
		}
		if (j >= 0)
		{
			temp += (n2[j] - '0');
		}
		temp += carry;
		carry = temp / 10;
		temp = temp % 10;
		r[index] = (temp + '0');
		index++;
		i--;
		j--;
	}
	if (index > size_r)
	{
		r = 0;
	}
	if (carry)
	{
		r[index] = (carry + '0');
	}
	
	left = 0, right = strlen(r) - 1;
	while (left < right)
	{
		char temp = r[left];
		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}
	return r;
}

