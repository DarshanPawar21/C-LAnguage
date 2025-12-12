#include<stdio.h>
void main(){

	char str[100];
	int start=0,end,out=0;
	
	//accept tha value for user;
	printf("Enter the name :");
	gets(str);
	
	for(end=0;str[end]!='\0';end++);
	end = end - 1;
	for(start,end;start < end;start++,end--){
		if(str[start]!=str[end]){
			out = 1;
			break;
		}
	}
	
	if(out==0){
		printf("%s string is palindrom !",str);
	}else{
		printf("%s string is not palindrom !",str);
	}




}
