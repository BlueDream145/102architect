/*
** EPITECH PROJECT, 2017
** my_report.c
** File description:
**
*/

#include "architect.h"

void report_bad_usage(void)
{
	const char *error = "Bad usage.\n";

	report_error(error);
}

void report_bad_syntax(void)
{
	const char *error = "Bad syntax.\n";

	report_error(error);
}

void report_error(const char *str)
{
	int len = 0;

	for (len = 0; str[len]; len++);
	write(2, str, len);
	exit(84);
}
