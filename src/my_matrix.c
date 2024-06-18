/*
** EPITECH PROJECT, 2017
** my_matrix.c
** File description:
**
*/

#include "architect.h"

double *my_matrix_rotation(struct point *p, double *m)
{
	int i;
	double *result = malloc(sizeof(double) * 9);

	if (result == NULL)
		report_error("Fatal error: malloc failed.");
	for (i = 0; i < 9; i++) {
		if (i == 0 || i == 4)
			result[i] = p->x;
		else if (i == 1)
			result[i] = - p->y;
		if (i == 3)
			result[i] = p->y;
		else if (i == 8)
			result[i] = 1;
		if (i != 0 && i != 4 && i != 1 && i != 3 && i != 8)
			result[i] = m[i];
	}
	return (result);
}

double *my_matrix_symmetry(struct point *p, double *m)
{
	int i;
	double *result = malloc(sizeof(double) * 9);

	if (result == NULL)
		report_error("Fatal error: malloc failed.");
	for (i = 0; i < 9; i++) {
		if (i == 1 || i == 3)
			result[i] = p->y;
		else if (i == 0)
			result[i] = p->x;
		if (i == 4)
			result[i] = -p->x;
		else if (i != 0 && i != 1 && i != 3)
			result[i] = m[i];
	}
	return (result);
}
