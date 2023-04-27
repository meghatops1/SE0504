#include<stdio.h>
main(){
	int a=10,b=30,c,d;
	a++;
	printf("\n a=%d",a);//11
	b--;
	printf("\n b=%d",b);//29
	/*pre increment example:first increment 
	by self var and then assign to c
	*/
	c=++a;
	printf("\n c=%d and a=%d",c,a);
	/*post increment example:first assign 
	to d and then increment by self
	*/
	d=b++;
	printf("\n d=%d b=%d",d,b);
}
