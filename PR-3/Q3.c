#include<stdio.h>
int main(){
	int num,fd=0,i,count=0;
	printf("Enter the Count Nuber: ");
	scanf("%d",&num);
	int ld = num%10;
	while(num>9){
		num = num / 10;
		
	}
	fd=num;
	
	printf("%d",fd + ld);
}
	
