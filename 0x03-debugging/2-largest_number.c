#include "main.h"

/**
 * largest_number - returns the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;

	if (b > largest)
		largest = b;

	if (c > largest)
		largest = c;

	return (largest);
}
