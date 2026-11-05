#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int current;
	unsigned int number;
	unsigned int divisor;
	unsigned int digit;

	current = n;

	while (1)
	{
		if (current < 0)
		{
			_putchar('-');
			number = 0U - (unsigned int)current;
		}
		else
			number = (unsigned int)current;

		divisor = 1;
		while (number / divisor >= 10)
			divisor *= 10;

		while (divisor > 0)
		{
			digit = number / divisor;
			_putchar(digit + '0');
			number %= divisor;
			divisor /= 10;
		}

		if (current == 98)
			break;

		_putchar(',');
		_putchar(' ');

		if (current < 98)
			current++;
		else
			current--;
	}

	_putchar('\n');
}
