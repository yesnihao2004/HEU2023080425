#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int i,a,b,c,d;
   i=100;
   for(i=100;i<1000;i++){
   	a=i/100;
   	b=(i-a*100)/10;
   	c=i-a*100-b*10;
   	d=a*a*a+b*b*b+c*c*c;
   	if(i==d)
   	   printf("%d\n",i);
   }

	return 0;
}

