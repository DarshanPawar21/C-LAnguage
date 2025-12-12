#include<stdio.h>
void main(){
	int r,c;
	int i,j;
	printf("Enter the column :");
	scanf("%d",&r);
	printf("Enter the row :");
	scanf("%d",&c);
	
int arr[r][c];
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
			
			printf("Enter the Value of arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	int num,k;
	printf("Enter the row number :");
	scanf("%d",&num);
	
	for(k=num;k<=r;k++){
		printf("darshan");
	}
	
			
		
}
