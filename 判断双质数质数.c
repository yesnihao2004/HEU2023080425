#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int zhishu(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0){
			return 0;
		   }
	}
	return 1;
}
  
int main(int argc, char *argv[]) {
	int a,m,n,z,k;
	int zhishu(int x);
	scanf("%d,%d",&m,&n);
	if(m>n){
		z=n;
		n=m;
		m=z;
	}
	for(k=m;k<=n;k++){
		if(zhishu(k)==1&&zhishu(k+2)==1){
			printf("%d,%d\n",k,k+2);
		}
	}

	return 0;
}
