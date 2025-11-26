
#include <stdio.h>

int main()
{

    int num1, num2, num3;
    printf("Enter First Angel :"); 
    scanf("%d", &num1);
    printf("Enter Second Angel :"); 
    scanf("%d", &num2);
    num3 = 180 - (num1 + num2); 

    printf(" Third angel = %d", num3); 
}
