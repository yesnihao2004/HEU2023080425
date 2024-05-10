#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c,i;
	double e,a,b,qian,d;
	d=0;
     scanf("%lf,%lf,%d",&a,&b,&c);
     //printf("%d,%lf,%d",a,b,c);
     for(i=1;i<=c;i++){
     	d=(d+a)*(1+b/12);
     
	 }
	 printf("%.2f",d);

	return 0;
}

