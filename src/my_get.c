/*
** EPITECH PROJECT, 2017
** my_get.c
** File description:
** 
*/

#include "architect.h"

char my_getletter(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++) {
		if (str[i] == '-' || str[i] == ' ')
			continue;
		if (str[i] == 't' || str[i] == 'h' || str[i] == 'r'
		|| str[i] == 's')
			return (str[i]);
		else
			report_bad_syntax();
	}
	report_bad_syntax();
	return ('\0');
}

struct point *my_getpoint(double x, double y)
{
	struct point *p = malloc(sizeof(struct point));

	if (p == NULL)
		report_error("Fatal error: malloc failed.");
	p->x = x;
	p->y = y;
	return (p);
}
