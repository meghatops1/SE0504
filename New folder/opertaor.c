#include<stdio.h>
main(){
	int a,b,add,sub,mul,div,mod;
	printf("\n enter the value of a & b:");
	scanf("%d %d",&a,&b);
	add=a+b;
	printf("\n addition= %d",add);
	sub=a-b;
	printf("\n sub= %d",sub);
	mul=a*b;
	printf("\n mul= %d",mul);
	div=a/b;
	printf("\n div= %d",div);
	mod=a%b;
	printf("\n after divide a from b reminder=%d",mod);
	
}
