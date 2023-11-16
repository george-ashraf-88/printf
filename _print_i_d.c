#include "main.h"
/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int m, k = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	m = n;

	if (k < 0)
	{
		_putchar('-');
		m = -m;
		n = -n;
		k = -k;
		i++;
	}
	if (m > 0)
	{
		while (m / 10 != 0)
		{
			exp = exp * 10;
			m = m / 10;
		}
		m = n;
		while (exp > 0)
		{
			digit = m / exp;
			_putchar(digit + '0');
			m = m - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(k + '0');

	return (i);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
