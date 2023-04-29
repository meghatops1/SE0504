#include<stdio.h>
//if
/*
	if(condition){
		//block of code
	}
	esle{
	   //block of code
	}
*/
main(){
	int a;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	if(a>0){
		printf("\n Given number is positive");
	}
	else{
		printf("\n Given number is negative");
	}
}
