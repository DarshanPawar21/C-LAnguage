#include <stdio.h>

int main()

{
    // Gross salary Calculator

    int salary, hra, da,ta, total; 
    printf("Enter your salary :"); 
    scanf("%d", &salary);               

    hra = salary * 10 / 100;              
    da = salary * 5 / 100;                
    ta = salary * 8 / 100;                
    total = salary + hra + da + ta; 

    printf("Gross Salary = %d Rs",total); 
    
}
