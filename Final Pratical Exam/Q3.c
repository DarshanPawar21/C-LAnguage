#include<stdio.h>
void main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num % 3 == 0){
		if(num % 5 == 0){
			printf("the %d is divisible !",num);
		}
		else{
			printf("%d is not divisible !",num);
		}
	}
	
	
	else{
		printf("%d is not divisible !",num);
	}
}
