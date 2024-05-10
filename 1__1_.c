#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a,b,c;
    scanf("%d",&a);
    b=a%2;
    if(b==0||a<0)
    c=a*a;
    else
    c=a/2;
    printf("%d",c);
	return 0;
}


