#include "main.h"
/**
 * print_hex - prints a hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_hex(va_list val)
{
	int i;
	int *hex_array;
	int digit_count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp_num = num;

	while (temp_num != 0)
	{
		temp_num /= 16;
		digit_count++;
	}
	if (digit_count == 0)
	{
		digit_count = 1;
	}

	hex_array = (int *)malloc(digit_count * sizeof(int));
	if (hex_array)
	{
		for (i = 0; i < digit_count; i++)
		{
			hex_array[i] = num % 16;
			num /= 16;
		}
		for (i = digit_count - 1; i >= 0; i--)
		{
			if (hex_array[i] > 9)
			{
				_putchar(hex_array[i] - 10 + 'A');
			}
			else
			{
				_putchar(hex_array[i] + '0');
			}
		}
		free(hex_array);
		return (digit_count);
	}
	return (-1);
}
