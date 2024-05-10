#include <stdio.h>
int main()
{
	int a[100],b[100],c[100],d[100];
    int h[100]={0};
	int i,j,m,n,t,z=0,k=0,g=0,p,q=0,s;
 
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf(" %d",&a[i]);
 
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf(" %d",&b[i]);//ÊäÈëm£¬n
 
	for(j=1;j<m;j++)
		for(i=0;i<m-j;i++)
		{	if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	
		for(i=0;i<m;i++)
			if(a[i]!=a[i+1])
			{
				c[k]=a[i];
					k++;
			}
 
	for(j=1;j<m;j++)
		for(i=0;i<n-j;i++)
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
	
 
		for(i=0;i<n;i++)
			if(b[i]!=b[i+1])
			{
				d[g]=b[i];
				g++;
			}
	for(i=0;i<k;i++)
	{	
		if(a[i]==b[i])
			z++;
	}
     
 	if(z==k&&k==g)
	{
	printf("1\n");
    }
	else
		printf("0\n");
	
	for(i=0;i<k;i++)
	 {  p=c[i];
	   for(s=0;s<m;s++)
		{
		  if(p==a[s])
		  {   
			h[q]=h[q]+1;	
		     }
		}
		q=q+1;
	 }
	for(i=0;i<k;i++)
		printf("%d %d\n",c[i],h[i]);
 
	return 0;
}
 
