/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

#include "architect.h"

int main(int ac, char **as)
{
	double m[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
	struct point *p;

	check_syntax(ac, as);
	p = my_getpoint(atof(as[1]), atof(as[2]));
	process(ac, as, m, p);
	my_put_matrix(m);
	printf("(%s,%s) => (%.2f,%.2f)\n", as[1], as[2], p->x, p->y);
	free(p);
	return (0);
}
