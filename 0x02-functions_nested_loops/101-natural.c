#include "main.h"

/**
 * main - calculates the sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	int sum;
	int remaining;
	int divisor;
	int digit;

	sum = 0;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
			sum += number;
	}

	remaining = sum;
	divisor = 1;

	while (remaining / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = remaining / divisor;
		_putchar(digit + '0');
		remaining %= divisor;
		divisor /= 10;
	}

	_putchar('\n');

	return (0);
}
