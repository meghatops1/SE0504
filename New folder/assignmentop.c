#include<stdio.h>
main(){
	int a=10,b=20,c;
	a+=b;//a=a+b//10+20/a=30
	printf("\n a=%d",a);
	/*sizeof operator == return
	 number of byte occupied by given datatype*/
	c=sizeof(double);//pass any datatype or variable as parameter
	printf("\n size of a=%d",c); 
	
}
