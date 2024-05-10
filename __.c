#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int m,n,z;
    scanf("%d,%d",&m,&n);

	
	if((n<0)||(m<0)||(n>9999)||(m>9999)){
		printf("error");
	}
	else{    if(m>n){
    	z=m;
    	m=n;
    	n=z;}
		int i,j,sum;
		int a=0;
		for(i=m;i<=n;i++){
			sum=0;
			for(j=1;j<i;j++){
				if(i%j==0)
				sum=sum+j;
			}
			if(sum==i){
				if(a==0)
				printf("%d",i);
				else
				printf(",%d",i);
			   a++;
			}
		}
	}

	return 0;
}

