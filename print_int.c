#include "main.h"
/**
 * print_i - prints a number using putchar
 * @n: the number to be printed
 */
void print_i(int n)
	{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_i((num / 10));

	_putchar((num % 10) + '0');
	}
/**
 * print_int - provides the number to be printed
 * @args: the number to be printed
 * Return: the length of the printed integer
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);

	print_i(n);
	return (intlen(n));
}
/**
 * intlen - it counts the length of an integer
 * @n: the number to be counted
 * Return: the length of the int
 */
int intlen(int n)
{
	unsigned int count, i = 0, num = n;

	if (n < 0)
	{
		num = -num;
		i++;
	}
	for (; (num) > 0; i++)
	{
		num = num / 10;
	}
	return (i);
}
