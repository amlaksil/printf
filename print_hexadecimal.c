#include "main.h"
/**
 * print_hexadecimal - it prints given interger to octal
 * @args: the number to be converted and printed
 * Return: the amount of character printed in side this function
 */
int print_hexadecimal(va_list args)
{
	unsigned int num, n;
	int i, j;
	char a[16] = "0123456789abcdef";
	char str[9];

	n = va_arg(args, int);
	num = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num != 0; i++)
	{
		str[i] = a[num % 16];
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (i);
}
