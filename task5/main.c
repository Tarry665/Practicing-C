#include <stdio.h>
#include <stdlib.h>

void print_matrix(double** matrix, int n){
	int i, j;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%.2lf ",matrix[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	char op;
	int i, j;
	double** A;
	double** B;
	double** result;
	
	printf("Enter size of matrix: ");
	scanf("%d", &n);
	
	A = create_matrix(n);
	B = create_matrix(n);
	
	printf("Enter numbers in matrix A: \n");
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("Enter element in [%d][%d]: ", i + 1, j + 1);
			scanf("%lf", &A[i][j]);
		}
	}
	
	printf("Enter numbers in matrix B: \n");
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("Enter element in [%d][%d]: ", i + 1, j + 1);
			scanf("%lf", &B[i][j]);
		}
	}
	
	printf("Enter operation: ");
	scanf(" %c", &op);
	
	result = calculate(A, B, n, op);
	
	if (result != NULL){
		printf("result:\n");
		print_matrix(result, n);
		free_matrix(result, n);
	}
	
	free_matrix(A, n);
	free_matrix(B, n);
	
	return 0;
}
