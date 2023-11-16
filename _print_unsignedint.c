#include "main.h"

/**
 * print_unsignedint - prints integer
 * @args: argument to print
 * Return: integer
 */

int print_unsignedint(va_list args)
{
	unsigned int n = va_arg(args, int);
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
