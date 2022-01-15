#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void funtion_2() {
	int AREA;
	int PERIMETER;
	int L;
	
	AREA=L*L;
	PERIMETER=4*L;
	
	printf("AREA dari L adalah : %d :", AREA);
	printf("PERIMETER dari L adalah : %d", PERIMETER);
}

int main(int argc, char *argv[]){
    int i;
    i=1;
    int L;
    
    if (0<i)
        do {
        	
        	printf("masukkan L : ");
        	scanf("%d",&L);
    if(L>0)
         funtion_2();
         
         else exit(1);
    }
    while (0<i);
	return 0;
}
