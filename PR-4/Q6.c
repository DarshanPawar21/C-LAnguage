#include<stdio.h>
void main(){
	int i,j,k,g;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %d",j);
		}
			for(g=i;g<5;g++){
				printf("  ");
			}
			for(g=i;g<5;g++){
				printf("  ");
			}
			for(k=i;k>=1;k--){
			printf(" %d",k);
		}
		printf("\n");
	}
}
