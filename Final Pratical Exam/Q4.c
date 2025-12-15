#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the Number :");
	scanf("%d",&n);
	int a[n],b[n],sum[n];
	int *p1 =a,*p2=b,*p3=sum;
	printf("Enter the Element of first aaray :");
	for(i=1;i<=n;i++){
		scanf("%d",(p1 + i));
	}
	printf("Enter the Element of second aaray :");
	for(i=1;i<=n;i++){
		scanf("%d",(p2 + i));
	}

	for(i=1;i<=n;i++){
		*(p3 + i) = *(p1 + i) + *(p2 + i);
	}
	for(i=1;i<=n;i++){
		printf("%d ",*(p3 + i));
	}
}
