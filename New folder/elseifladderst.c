#include<stdio.h>
/*if(cond){
}
else if(cond){
}
else if(cond){
}
else if(cond){
}
else{
}
*/
main(){
	int x,y;
	printf("enter x axis and y axis:");
	scanf("%d %d",&x,&y);
	
	if(x>0 && y>0){
		printf("\n first");
	}
	else if(x<0 && y>0){
		printf("\n second");
	}
	else if(x<0 && y<0){
		printf("\n third");
	}
	else if(x>0 && y<0){
		printf("\n forth");
	}
	else{
		printf("\n center");
	}
}
