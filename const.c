#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   	int a[5],b,i;
	int sum=0;
	for(i=0;i<4;i++){
		scanf("%d,",&b);
		a[i]=b;
		sum+=a[i];
	}
	a[4]=sum;
	for(i=0;i<5;i++){
		printf("%d,",a[i]);
	}
}
