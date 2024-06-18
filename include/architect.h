/*
** EPITECH PROJECT, 2017
** architect.h
** File description:
** 
*/

#ifndef architect_
#define architect_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

struct point {
	double x;
	double y;
};

// main.c

// my_check.c
void check_syntax(int ac, char **as);
int check_int_syntax(char *str);
int check_char_syntax(char *str);

// my_engine_math.c
void my_translation(struct point *p, double *m, double x, double y);
void my_homeothety(struct point *p, double *m, double x, double y);
void my_rotation(struct point *p, double *m, double alpha);
void my_symmetry(struct point *p, double *m, double alpha);

// my_engine.c
void process(int ac, char **as, double *m, struct point *p);
void process_degree(struct point *p, double *m, char **as, int i);
void process_coordinates(struct point *p, double *m, char **as, int i);

// my_get.c
char my_getletter(char *str);
struct point *my_getpoint(double x, double y);

// my_matrix.c
double *my_matrix_rotation(struct point *p, double *m);
double *my_matrix_symmetry(struct point *p, double *m);
double *mult_matrix(double *m, double *m2);

// my_put.c
void my_put_matrix(double *m);

// my_report.c
void report_bad_usage(void);
void report_bad_syntax(void);
void report_error(const char *str);

#endif /* architect_ */
