#include<stdio.h>
int main (void){
	int s;

	printf("enter num \n");
	scanf("%d",&s);
    while(s !=0 && s!=1){
    	s=s-2;
    
	}

	if(s==0){
		printf("the num is odd=0\nthe num is even=1\n ");
	}else {
			printf("the num is odd=1 \nthe num is even=0  ");
	}
}
