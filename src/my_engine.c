/*
** EPITECH PROJECT, 2017
** my_engine.c
** File description:
**
*/

#include "architect.h"

void process(int ac, char **as, double *m, struct point *p)
{
	int i;
	char current_letter;

	for (i = 3; i < ac; i++) {
		current_letter = my_getletter(as[i]);
		if (current_letter == 'r' || current_letter == 's') {
			process_degree(p, m, as, i);
			i++;
		}
		else if (current_letter == 't' || current_letter == 'h') {
			process_coordinates(p, m, as, i);
			i += 2;
		}
	}
}

void process_degree(struct point *p, double *m, char **as, int i)
{
	const char *r_text = "Rotation at a %.0f degree angle\n";
	const char *s_text = "Symmetry about an axis inclined with an angle "
	"of %.0f degrees\n";
	char letter = my_getletter(as[i]);
	double alpha = atof(as[i + 1]);

	if (letter == 'r') {
		my_rotation(p, m, alpha);
		printf(r_text, alpha);
	}
	else if (letter == 's') {
		my_symmetry(p, m, alpha);
		printf(s_text, alpha);
	}
}

void process_coordinates(struct point *p, double *m, char **as, int i)
{
	const char *t_text = "Translation by the vector (%.0f, %.0f)\n";
	const char *h_text = "Homothety by the ratios %.0f and %.0f\n";
	char letter = my_getletter(as[i]);
	double x = atof(as[i + 1]);
	double y = atof(as[i + 2]);

	if (letter == 't') {
		my_translation(p, m, x, y);
		printf(t_text, x, y);
	}
	else if (letter == 'h') {
		my_homeothety(p, m, x, y);
		printf(h_text, x, y);
	}
}
