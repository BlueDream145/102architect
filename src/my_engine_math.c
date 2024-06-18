/*
** EPITECH PROJECT, 2017
** my_engine_math.c
** File description:
** 
*/

#include "architect.h"

void my_translation(struct point *p, double *m, double x, double y)
{
	m[2] += x;
	m[5] += y;
	p->x += x;
	p->y += y;
}

void my_homeothety(struct point *p, double *m, double x, double y)
{
	int i = 0;

	for (i = 0; i < 6; i++)
		if (i < 3)
			m[i] *= x;
		else
			m[i] *= y;
	p->x *= x;
	p->y *= y;
}

void my_rotation(struct point *p, double *m, double alpha)
{
	double *rot;
	double x = 0;
	double y = 0;
	double tmp;

	alpha = (alpha * M_PI) / 180;
	x = cos(alpha);
	y = sin(alpha);
	rot = my_matrix_rotation(my_getpoint(x, y), m);
	mult_matrix(m, rot);
	tmp = p->x;
	p->x = tmp * rot[0] + p->y * rot[1];
	p->y = tmp * rot[3] + p->y * rot[4];
}

void my_symmetry(struct point *p, double *m, double alpha)
{
	double *rot;
	double x = 0;
	double y = 0;
	double tmp;

	alpha = (alpha * M_PI) / 180;
	x = cos(2 * alpha);
	y = cos(2 * alpha);
	rot = my_matrix_symmetry(my_getpoint(x, y), m);
	mult_matrix(m, rot);
	tmp = p->x;
	p->x = tmp * rot[0] + p->y * rot[1];
	p->y = tmp * rot[3] + p->y * rot[4];
}

double *mult_matrix(double *m1, double *m2)
{
	int size = 9;
	int i = 0;
	double m3[size];

	for (i = 0; i < 9; i++)
		m3[i] = m1[i];
	m1[0] = m3[0] * m2[0] + m3[1] * m2[3] + m3[2] * m2[6];
	m1[1] = m3[0] * m2[1] + m3[1] * m2[4] + m3[2] * m2[7];
	m1[2] = m3[0] * m2[2] + m3[1] * m2[5] + m3[2] * m2[8];
	m1[3] = m3[3] * m2[0] + m3[4] * m2[3] + m3[5] * m2[6];
	m1[4] = m3[3] * m2[1] + m3[4] * m2[4] + m3[5] * m2[7];
	m1[5] = m3[3] * m2[2] + m3[4] * m2[5] + m3[5] * m2[8];
	m1[6] = m3[6] * m2[0] + m3[7] * m2[3] + m3[8] * m2[6];
	m1[7] = m3[6] * m2[1] + m3[7] * m2[4] + m3[8] * m2[7];
	m1[8] = m3[6] * m2[2] + m3[7] * m2[5] + m3[8] * m2[8];
	return (m1);
}
