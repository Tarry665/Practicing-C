#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char stroka[81];

    printf("Enter a string (up to 80 chars): ");

    fgets(stroka, sizeof(stroka), stdin);
    stroka[strlen(stroka)] = '\0';

    for(int i = 0; stroka[i] != '\0'; i++){
        if(stroka[i] == 'a'){
            stroka[i] ='A';
        }
        else if(stroka[i] == 'b'){
            stroka[i] = 'B';   
        }
    }

    printf("Result: %s", stroka);

}