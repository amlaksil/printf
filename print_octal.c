#include "main.h"
/**
 * print_octal - it prints given interger to octal
 * @n: the number to be converted and printed
 * Return: the amount of character printed in side this function
 */
int print_octal(va_list args)
{
	unsigned int num ,n;
	int i, j;
	char a[8] = "01234567";
	char str[12];
	n = va_arg(args,int);
	num = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; num != 0; i++)
	{
		str[i] = a[num % 8];
		num = num / 8;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (i);
}
