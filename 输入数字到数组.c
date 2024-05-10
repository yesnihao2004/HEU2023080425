#include <stdio.h>
#include <math.h>
double ping(double *p,int n){
	int i;
	double sum,ave;
	for(i=0;i<n;i++){
		sum+=*(p+i);
	}
	ave=sum/n;
//	printf("平均值是：%lf",ave);	
	return ave;
}

int main(){
	int n,i;
	printf("请输入数字的个数：");
	scanf("%d\n",&n);
	double a[n];
	for(i=0;i<n;i++){
		scanf("%lf,",&a[i]);
	}
//	for(i=0;i<n;i++){
//		printf("%lf ",a[i]);
//	}
//	ping(a,n);
	printf("平均值是：%lf\n",ping(a,n));
//	printf("平均值是：%lf",);
//	printf("%.2f",ping(a[n]));
    double s,sm=0,y;
    for(i=0;i<n;i++){
    	sm+=(a[i]-ping(a,n))*(a[i]-ping(a,n));
    	printf("%lf,",a[i]);
	}printf("\n");
        
        printf("%lf\n",sm);
        s=sqrt(sm/(n-1));
		printf("偏差是：%.2f",s);
	return 0;
}
