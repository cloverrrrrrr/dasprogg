#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main()
{
    int x,n,i,h;
    i=1;
	
	printf("\nperpangkatan iteratif\n");
	 
    printf("\nbilangan yang dipangkatkan (x) : ");
    scanf("%d",&x);
    printf("\npangkat bilangan (n) : ");
    scanf("%d",&n);
    
    printf("\n");
           
	do{
    h=pow(x,i);
    printf("%d ",h);
    i++;
}
    while(i<=n);
}

