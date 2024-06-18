/*
** EPITECH PROJECT, 2017
** my_check.c
** File description:
**
*/

#include "architect.h"

void check_syntax(int ac, char **as)
{
	int i;
	char current_letter;

	if (ac < 5)
		report_bad_usage();
	else if (check_int_syntax(as[1]) == 0 || check_int_syntax(as[2]) == 0)
		report_bad_syntax();
	for (i = 3; i < ac; i++) {
		if (check_char_syntax(as[i]) == 0)
			report_bad_usage();
		current_letter = my_getletter(as[i]);
		if ((current_letter == 'r' || current_letter == 's')
		&& ac >= (i + 2) && check_int_syntax(as[i + 1]) == 1)
			i++;
		else if ((current_letter == 't' || current_letter == 'h')
		&& ac >= (i + 3) && check_int_syntax(as[i + 1]) == 1 &&
		check_int_syntax(as[i + 2]) == 1)
			i += 2;
		else
			report_bad_usage();
	}
}

int check_int_syntax(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-'
		&& str[i] != '.' && str[i] != ' ')
			return (0);
	return (1);
}

int check_char_syntax(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		if (!(str[i] >= 'a' && str[i] <= 'z') &&
		!(str[i] >= 'A' && str[i] <= 'Z') && str[i] != '-'
		&& str[i] != ' ')
			return (0);
	return (1);
}
