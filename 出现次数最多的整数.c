#include<stdio.h>

int main(){
//	int n,i,k,b,c=1;
//	scanf("%d",&n);
//	int a[n];
//	int c[n]={1};
//	for(i=0;i<n;i++)
//	{
//		scanf(" %d",a[i]);
//	}
//	for(i=0;i<n;i++)
//	{  b=a[i];
//	   for(k=i+1;k<n;k++)
//	   {
//	   	if(b==a[k]){
//	   		c[i]++;
//		   }
//		} 
		
//	}
//	
//}
 
    int a[50], b[50], c[50], n, i, j, t, max;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 1; i < n; i++) {
        for(j = 0;j < n - 1; j++) {
          	if (a[j] > a[j + 1]) {
	            t = a[j];
				a[j] = a[j + 1];
				a[j+1] = t;
		  	}
        }
	}
    j = 0;
    t = -1;
    for(i = 0; i < n - 1; i++) {
        if (a[i] != a[i+1]) {
            b[j] = i - t;
            c[j] = i;
            t = i;
            j++;
        }
    }
    b[j] = n - 1 - t;
    c[j] = n - 1;
    max = b[0];
    for (i = 1;i <= j; i++) {
        if(max < b[i]) {
			max = b[i];
		}
    }
    for (i = 0; i <= j; i++) {
		if (b[i] == max) {
        t = c[i];
        printf("%d %d\n",a[t],b[i]);
    }
	}
    return 0;
} 
