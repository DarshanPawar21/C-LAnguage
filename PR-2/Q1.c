

#include<stdio.h>
void main (){
	int num;
	char grade;
	printf("Enter your score: ");
	scanf("%d", &num);
		grade = (num>=90)?'A':
 			(num>=80)?'B':
 			(num>=70)?'C':
 			(num>=60)?'D':
 			(num>33)?'E':'F'; 			 
 	printf("your grade is = %c ", grade);
	
	
	
	
}
