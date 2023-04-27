#include<stdio.h>
main(){
	int num;
	printf("\n enter number:");
	scanf("%d",&num);
	/*
	ternary operator//conditional operator
	(condition)?true:flase;	
	*/
	(num%2==0)?printf("\n number is Even"):printf("\n number is odd");
}
