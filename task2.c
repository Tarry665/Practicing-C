#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void array3(){
    
    double arr3[3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter an element in %d %d: ", i + 1, j + 1);
            scanf("%lf", &arr3[i][j]);
        }
    }

    printf("Your matrix is:\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%.2lf ", arr3[i][j]);
        }
        printf("\n");
    }

    double sum1 = arr3[0][0] + arr3[1][1] + arr3[2][2];
    double sum2 = arr3[0][2] + arr3[1][1] + arr3[2][0];

    printf("The sum of the elements of the main diagonal is %.2lf\n", sum1);
    printf("The sum of the elements of the side diagonal is %.2lf\n", sum2);

}

void array2(){

    int arr2[2][2] = {0};
    int arr2sq[2][2] = {0};

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter an element in %d %d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Your matrix is:\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 2; i++){     
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                arr2sq[i][j] += arr2[i][k] * arr2[k][j];
            }
        }
    }

    printf("Yor squared matrix is:\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
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
        printf("\n1. Define a double array 3x3");
        printf("\n2. Define an int array 2x2");
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
