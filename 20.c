#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a,b,c,d,e,g,h,i,j,k;
	     scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	    if(a>118) g=a-26+4;
	else g=a+4;
		if(b>118) h=b-26+4;
	else h=b+4;
		if(c>118) i=c-26+4;
	else i=c+4;
		if(d>118) j=d-26+4;
	else j=d+4;
		if(e>118) k=e-26+4;
	else k=e+4;
  
	printf("%c%c%c%c%c",g,h,i,j,k);
	return 0;
}




