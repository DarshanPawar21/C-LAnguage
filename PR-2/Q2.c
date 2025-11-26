

#include<stdio.h>
void main (){
	int score;
	char grate;
	printf("Enter you Mark ");
	scanf("%d",&score);
		if (score >= 90)
    grate = 'A';
    else if (score >= 80)
    grate = 'B';
    else if (score >= 70)
    grate = 'C';
    else if (score >= 60)
    grate = 'D';
    else if (score >= 33)
    grate = 'E';
    else
        grate = 'F';
        
        switch(grate){
        case 'A' : printf("Your Grade is A");
        	break;
        case 'B' : printf("Youa grade is B");
        	break;
        case 'C' : printf("Your grade is C");
        	break;
        case 'D' : printf("your grade is D");
        	break;
        case 'E' : printf("Your grade is E");
        	break;
        case 'F' : printf ("your grade is F : Papa na paisha ni bagado go to hira gashva !");
        	
		}
}
