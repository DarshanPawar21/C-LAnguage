#include<stdio.h>
void main(){
	
	char a = 'A',z = 'Z';
	
	printf("Enter The Alphabet :");
	scanf("%c",&a);
	do{
		printf("%c ",a);
		a + 3;
		
	}while(a<=z);
}
