#include<stdio.h>
void main(){
	int i,j,k,g;
	for(i=5;i>=1;i--){
		for(k=1;k<i;k++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf(" %d",j);
		}
		for(g=4;g>=i;g--){
			printf(" %d",g);
		}	
		printf("\n");
	}
	
	
}
