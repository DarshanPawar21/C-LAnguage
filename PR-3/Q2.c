#include<stdio.h>
void main(){
	int num = 123,i = 1,count = 0;
//	printf("Enter the Count Nuber: ");
//	scanf("%d ",&num);
	while(num>0){
		num = num / 10;
		count = count + 1;
		i++;
	}
	printf("%d",count);
	
	
}
