#include <stdlib.h>
#include <stdio.h>
#include "matrix_ops.h"

double** create_matrix(int n){
	int i;
	double** matrix = (double**)malloc(n * sizeof(double*));
	if (matrix == NULL) return NULL;
	
	for (i = 0; i < n; i++){
		matrix[i] = (double*)malloc(n * sizeof(double));
		if (matrix[i] == NULL) return NULL;
	}
	return matrix;
}

void free_matrix(double** matrix, int n){
	int i;
	if (matrix == NULL) return;
	
	for (i = 0; i < n; i++){
		free(matrix[i]);
	}
	free(matrix);
}

double** calculate(double** A, double** B, int n, char op){
	int i, j, k;
	double** res = create_matrix(n);
	if (res == NULL) return NULL;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(op == '+'){
				res[i][j] = A[i][j] + B[i][j];
			} else if(op == '-'){
				res[i][j] = A[i][j] - B[i][j];
			} else if(op == '*'){
				res[i][j] = 0;
				for (k = 0; k < n; k++){
					res[i][j] += A[i][k] * B[k][j];
				}
			}
		}
	}
	return res;
}
