#include <stdio.h>
#include <math.h>
double ping(double *p,int n){
	int i;
	double sum,ave;
	for(i=0;i<n;i++){
		sum+=*(p+i);
	}
	ave=sum/n;
//	printf("ƽ��ֵ�ǣ�%lf",ave);	
	return ave;
}

int main(){
	int n,i;
	printf("���������ֵĸ�����");
	scanf("%d\n",&n);
	double a[n];
	for(i=0;i<n;i++){
		scanf("%lf,",&a[i]);
	}
//	for(i=0;i<n;i++){
//		printf("%lf ",a[i]);
//	}
//	ping(a,n);
	printf("ƽ��ֵ�ǣ�%lf\n",ping(a,n));
//	printf("ƽ��ֵ�ǣ�%lf",);
//	printf("%.2f",ping(a[n]));
    double s,sm=0,y;
    for(i=0;i<n;i++){
    	sm+=(a[i]-ping(a,n))*(a[i]-ping(a,n));
    	printf("%lf,",a[i]);
	}printf("\n");
        
        printf("%lf\n",sm);
        s=sqrt(sm/(n-1));
		printf("ƫ���ǣ�%.2f",s);
	return 0;
}
