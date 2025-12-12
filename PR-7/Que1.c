#include<stdio.h>
void main(){
	int choice,a,b,ans;
	printf("Enter your choice ! what you should calculate the number :\n");
	printf("Enter +\n");
	printf("Enter -\n");
	printf("Enter *\n");
	printf("Enter /\n");
	printf("Enter % \n");
	
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator : ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            ans = a + b;
            printf("Answer = %d\n", ans);
            break;

        case '-':
            ans = a - b;
            printf("Answer = %d\n", ans);
            break;
        case '*':
        	ans = a * b;
        	printf("Answer = %d\n",ans);
        	break;
        case '/':
        	ans = a /b;
    		printf("Answer = %d\n",ans);
    		break;
    	case  '%':
    		ans = a % b;
    		printf("Answer = %d\n",ans);
    		break;

        default:
            printf("Invalid operator!");
    }

    return 0;


	
}
