#include "main.h"
#include <stdio.h>
/**
 * print_bool - it prints unsigned integer in bool format
 * @n: the number to be printed as bool
 * Return: the length of the printed bool
 */
int print_binary(va_list args)
{
	unsigned int  num, n;
	int i, j;
	char s[65];

	n = va_arg(args,int);
	num = n;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; num != 0; i++)
	{
		if (num % 2 == 0)
			s[i] = '0';
		if (num % 2 == 1)
			s[i] = '1';
		num = num / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (i);
}
