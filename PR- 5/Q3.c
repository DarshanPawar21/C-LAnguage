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
	
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
			
			printf(" %d",arr[j][i]);
		}
		printf("\n");
}
} 
