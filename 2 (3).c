#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float legendre(int n, float x) {
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return x;
    } else {
        return ((2 * n - 1) * x -legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / n;
    }
}

int main() {
    int n;
    float x;

    // 输入n和x
    scanf("%d,%f", &n, &x);

    // 判断并输出结果
    if(n < 0) {
        printf("error\n");
    } else {
        printf("%.2f\n", legendre(n, x));
    }

    return 0;
}


