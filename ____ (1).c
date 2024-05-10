#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,b;
    b=1;
    for(i=9;i>0;i--){
    	b=2*(b+1);
	}
	printf("%d",b);
	return 0;
}

