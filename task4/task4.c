#include <stdio.h>
#include "triangle.h"

int main(){
    double a, b, c;
    int x;

    while(1){
        printf("\nSelect an option:");
        printf("\n");
        printf("\n1. Calculate perimetr and an area of the triangle");
        printf("\n2. Exit");
        printf("\n");
        printf("\nEnter your choice: ");

        scanf("%d", &x);
        switch(x){
            case 1:
                printf("\nEnter 3 sides of the triangle: ");
                scanf("%lf %lf %lf", &a, &b, &c);

                if(a + b > c && a + c > b && c + b > a){
                    printf("Perimetr is %.2lf\n", Perimetr(a, b, c));
                    printf("Area is %.2lf\n", Area(a, b, c));
                }else{
                    printf("Error, triangle with such sides doesnt exist\n");
                }
                break;
            case 2:
                return 0;
            default:
                return 0;
        }
    }
}