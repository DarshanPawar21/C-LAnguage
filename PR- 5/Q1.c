#include<stdio.h>
void main(){
	int i,arr[i],n;
	printf("Enter the total number of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(i<=0){
			printf(" %d",i);
		}
	}
}
