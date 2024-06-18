/*
** EPITECH PROJECT, 2017
** my_put.c
** File description:
** 
*/

#include "architect.h"

void my_put_matrix(double *m)
{
	const int elems_count = 9;
	int i = 0;

	while (i < elems_count) {
		if(m[i] == 0 || m[i] < 0.01)
			printf("0.00");
		else
			printf("%.2f", m[i]);
		i++;
		if (i % 3 == 0)
			printf("\n");
		else if (m[i - 1] < 0)
			printf("      ");
		else
			printf("       ");
	}
}
