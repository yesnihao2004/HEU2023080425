#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g,h,i,j;
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	int k[8];
	k[0]=a;
	k[1]=b;
	k[2]=c;
	k[3]=d;
	k[4]=e;
	k[5]=f;
	k[6]=g;
	k[7]=h;
	j=0;
	for(i=0;i<8;i++){
		if(k[i]%2==0){
		j=j+k[i];
		}
	}
	printf("%d",j);
	return 0;
}

