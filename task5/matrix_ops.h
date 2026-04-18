#ifndef MATRIX_OPS_H
#define MATRIX_OPS_H

double** create_matrix(int n);
void free_matrix(double** matrix, int n);
double** calculate(double** A, double** B, int n, char op);

#endif
