#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void maopao(int *arr,int n){
	int i,j,tem;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
			}
		}
	}
}
void print(int *arr,int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(int argc, char *argv[]) {
    int arr[5],i;
    for(i=0;i<5;i++){
    	scanf("%d,",&arr[i]);
	}
	maopao(arr,sizeof(arr)/sizeof(int));
	print(arr,sizeof(arr)/sizeof(int));
	
	return 0;
}

