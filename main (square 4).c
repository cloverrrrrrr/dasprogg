#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A, B, C;
	float S, Area, Perimeter;
	
	printf("masukan A :");
	scanf("%d", &A);
	printf("masukan B :");
	scanf("%d", &B);
	printf("masukan C :");
	scanf("%d", &C);
	S=(A+B+C)/2.0;
	Area=sqrt(S*(S-A)*(S-B)*(S-C));
	Perimeter=A+B+C;
	printf("Area = %f Perimeter = %f", Area, Perimeter);
	return 0;
	;
}
