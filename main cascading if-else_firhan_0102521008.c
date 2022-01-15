#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hours,wage,pay;
	
	printf("input employee hours worked 0-80 : ");
	scanf("%d",&hours);
	printf("input base wages : ");
	scanf("%d",&wage);
	
	if(hours<=40)
	  pay=wage*1;
	else
	   if(hours<=60)
	        pay=wage*1.5;	      
	   else 
	      if(hours<=80)
	          pay=wage*2;
	       else   
	           pay=0;
	           
	printf("the wage that has to be paid per month : %d",pay);
	   
	return 0;
}
