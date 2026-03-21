#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void array3(){
	printf("\nEnter size of your matrix: ");
int x = 0;
	scanf("%d", &x);
int i;
int j;
    double arr3[x][x];

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("Enter an element in %d %d: ", i + 1, j + 1);
            scanf("%lf", &arr3[i][j]);
        }
    }

    printf("Your matrix is:\n");

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("%.2lf ", arr3[i][j]);
        }
        printf("\n");
    }
    
    double sum1 = 0.0;
    double sum2 = 0.0;
    
    for (i = 0; i < x; i++){
		sum1 = sum1 + arr3[i][i];
	}
	
	for (i = 0; i < x; i++){
		sum2 = sum2 + arr3[i][x - i];
	}

    

    printf("The sum of the elements of the main diagonal is %.2lf\n", sum1);
    printf("The sum of the elements of the side diagonal is %.2lf\n", sum2);

}

void array2(){
int i;
int j;
int k;
	printf("\nEnter size of your matrix: ");
int x;
		scanf("%d", &x);	
    int arr2[x][x];
    int arr2sq[x][x];

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("Enter an element in %d %d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Your matrix is:\n");

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < x; i++){     
        for(j = 0; j < x; j++){
        	arr2sq[i][j] = 0;
            for(k = 0; k < x; k++){
                arr2sq[i][j] += arr2[i][k] * arr2[k][j];
            }
        }
    }

    printf("Yor squared matrix is:\n");

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("%d ", arr2sq[i][j]);
        }
        printf("\n");
    }
}

int main(){
    
    int x;

    while(1){
        printf("\nSelect an option:");
        printf("\n");
        printf("\n1. Define a double array");
        printf("\n2. Define an int array");
        printf("\n3. Exit the program");
        printf("\n");
        printf("\nEnter your choice: ");

        if (scanf("%d", &x) != 1) break;
        
        switch(x){
            case 1:
                array3();
                break;
            case 2:
                array2();
                break;
            case 3:
                return 0;

        }

    }  
    
}
