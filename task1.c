#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, x1, x2;

    while (1) {

        printf("Enter a, b and c: ");
        scanf("%lf %lf %lf", &a, &b, &c);
        double d = pow(b, 2) - 4 * a * c;
        if (d >= 0){
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("d = %.2lf\n", d);
            printf("x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        } else {
            printf("d = 0\n");
            printf("No possible solutions because d < 0\n");
        }
        char q;
		printf("Continue? y/n\n");
		scanf(" %c", &q);
		if (q == 'y'){
			continue;
		} else if (q == 'n'){
			break;
		} else {
			printf("Your answer is wrong.\n");
			break;
		}
			

    }

    


    return 0;
}
