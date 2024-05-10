#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num);
    
    if(num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
        printf("Can be divisible by 3,5,7.\n");
    } else if(num % 3 == 0 && num % 5 == 0) {
        printf("Can be divisible by 3,5.\n");
    } else if(num % 3 == 0 && num % 7 == 0) {
        printf("Can be divisible by 3,7.\n");
    } else if(num % 5 == 0 && num % 7 == 0) {
        printf("Can be divisible by 5,7.\n");
    } else if(num % 3 == 0) {
        printf("Can be divisible by 3.\n");
    } else if(num % 5 == 0) {
        printf("Can be divisible by 5.\n");
    } else if(num % 7 == 0) {
        printf("Can be divisible by 7.\n");
    } else {
        printf("Can not be divisible by 3,5,7.\n");
    }
    
    return 0;
}

