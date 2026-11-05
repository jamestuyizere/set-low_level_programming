#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the day of the year and remaining days
 * @month: month of the year
 * @day: day of the month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30,
			       31, 31, 30, 31, 30, 31};
	int day_of_year = day;
	int days_in_year;
	int leap_year;
	int i;

	leap_year = (year % 400 == 0 ||
		     (year % 4 == 0 && year % 100 != 0));

	if (month == 2 && day == 29 && !leap_year)
	{
		printf("Invalid date: 02/29/%04d\n", year);
		return;
	}

	for (i = 0; i < month - 1; i++)
		day_of_year += days_in_month[i];

	if (leap_year && month > 2)
		day_of_year++;

	days_in_year = leap_year ? 366 : 365;

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", days_in_year - day_of_year);
}
