#include<stdio.h>
void main(){
	int num,first,last,sum;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	if(num>=100 && num<=999){
		first = num / 100;
		last = num % 10;
		sum = first + last;
		
	}
	printf("%d",sum);
}
