#include<stdio.h>
/*
switch(choice){
    case '0':
    	block
    break;	
    case '1':
    	block
    break;	
    case '2':
    	block
    break;	
	default:
		block
	break;	
}
*/
main(){
	
	int ch,r,base,height,len;
	float areaoft;
	printf("\n press 1 for area of circle:");
	printf("\n press 2 for area of tringle:");
	printf("\n press 3 for area of square:");
	
	printf("\n enter choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n enter radius:");
			scanf("%d",&r);
			printf("\n area of circle=%f",(3.14*r*r));
		break;
		case 2:
			printf("\n enter height and base");
			scanf("%d %d",&height,&base);
			areaoft=height*base/2;
			printf("\n area of tringle=%f",areaoft);
		break;
		case 3:
			printf("\n enter len:");
			scanf("%d",&len);
			printf("\n area of square=%d",(len*len));
		break;		
		default:
			printf("\n wrong choice");
		break;		
	}
}
