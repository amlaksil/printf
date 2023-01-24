#include "main.h"
#include <stdio.h>
void print_ui(unsigned int);
int uintlen(unsigned int);
/**
 * print_uint - prints a number using putchar
 * @n: the number to be printed
 */
void print_ui(unsigned int n)
{
	unsigned int num = n;
	if ((num / 10) > 0)
		print_ui(num / 10);

	_putchar((num % 10) + '0');
}
/**
 * print_uint - prints a number using putchar
 * @n: the number to be printed
 */
int print_uint(va_list args)
{
	unsigned long int num;
	int n;
	num = va_arg(args,long int);
	if (num > 4294967296)
	{
		return (0);
	}
	n = (unsigned int) num;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	print_ui(n);

	return (uintlen(n));
}
/**
 * uintlen - it counts the length of an integer
 * @n: the number to be counted
 * Return: the length of the int
 */
int uintlen(unsigned int n)
{
	unsigned int i = 0, num = n;

	for (;(num) > 0;i++)
	{
		num = num/ 10;
	}
	return (i);
}
