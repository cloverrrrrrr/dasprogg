#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pangkat(int x, int n); 

main()
 {
	int x, n;
	printf("\nperpangkatan rekrusif\n");
		
		
	printf("\nbilangan yg akan dipangkatkan (x) : ");
	scanf("%d", &x);
	printf("\npangkat bilangan (n) : ");
	scanf("%d", &n);
    printf("\nhasil dari %d ^ %d adalah %d", x, n, pangkat(x,n));
	getch();
}

int pangkat(int x, int n)
{
	if(n==0) {
		return 1;
	} else {
	return x * pangkat(x,n-1);
	}

}
