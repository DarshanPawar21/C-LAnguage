#include<stdio.h>
void main(){
	int r,c,i,j;
	int max;
	
	printf("Enter the colum value :");
	scanf("%d",&c);
	printf("Enter the row value :");
	scanf("%d",&r);
	
	int arr[c][r];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value of arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}
		}
	}
    printf("The largest value is : %d",max);
}
