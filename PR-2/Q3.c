#include<stdio.h>
void main (){
	int score;
	char grate;
	printf("enter you score ");
	scanf("%d",&score);
			if (score >=90)
        	grate = 'A';
        
    	else if (score >=80)
        	grate = 'B';
        
   		else if (score >=70)
        	grate = 'C';
    	else if (score >=60)
        		grate = 'D';
    	else if (score >=33)
        		grate = 'E';
    	else
        grate = 'F';
        if(grate=='A'||grate=='B'||grate=='C'||grate=='D'){
       	printf("Your grade is = %c",grate);
       	printf("Good Job ! Your Goto next class.");
		}else{
		printf("sorry try again !");
		}
}
