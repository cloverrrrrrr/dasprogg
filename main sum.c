#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void function_1(int *a, int *b) {

	int sum;
	
    sum= (*a)+(*b);
    
    printf("nilai sum adalah = %d\n", sum);



}

int main(int argc, char *argv[]) {

	
int i;
i=1;
int a;
int b;

    if (0<i)
        do {
        	printf("masukan a :");
	        scanf("%d",&a);
	        
	        printf("masukan b :");
	        scanf("%d" ,&b);
        	
        	if(a>0 && b>0)
        	funtion_1(&a,&b);
        	
        	
        	else exit(1);
		}
		
		while (0<i);
		
	else
	
	printf("error");
	return 0;
}
