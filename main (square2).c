#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int L,B,Area,Perimeter;
	
	printf("masukan L :");
	scanf("%d", &L);
	printf("masukan B :");
	scanf("%d", &B);
	Area=L*B;
	Perimeter=2*(L+B);
	printf("Area dari L dan B adalah : %d ", Area);
	printf("Perimeter dari L dan B adalah: %d ", Perimeter);
	return 0;
}
