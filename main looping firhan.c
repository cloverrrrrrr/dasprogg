#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum, N, i;

    printf("masukkan n : "); 
    scanf("%d", &N); 
    
    sum=0;
    i=1;
    
    for(i=1; i>=N; i++) {
        sum=sum+i;
          printf(" + %d",i);
    
}
printf("  : %d\n", sum);

	return 0;
}
