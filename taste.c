# include <string.h>
#include<stdio.h>
# include<math.h>

/*int main(void){
	int x= 0;
	char *p=(char*) &x;
	*p++;
	printf(" \nad = %p    v=  %x",p,*p);
	++*p;
	printf(" \nad = %p    v=  %x",p,*p);
	*++p;
	printf("\n ad = %p    v=  %x",p,*p);
	(*p)++;
	printf("\n ad = %p    v=  %x",p,*p);
}
*/ 


int main(){
	int decimal,y=0,arr[y];
	while(1){
		printf("Enter a decimal number:\n-->");
	    scanf("%d",&decimal);
		printf("%o\n",decimal);
	printf("%x\n",decimal);
	while(decimal!=0){
		arr[y]=decimal%2;
		decimal/=2;
		++y;
	}
	for(y=y-1;y>=0;y--)
	printf("%d",arr[y]);
	printf("\n");
	}

	}


	

