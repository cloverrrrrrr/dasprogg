#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int R, AREA, PERIMETER;
	
	printf("masukan R :");
	scanf("%d",&R);
	AREA=22.0/7.0*R*R;
	PERIMETER=2*22.0/7.0*R;
	printf("hasil AREA dari R adalah : %d ", AREA);
	printf("hasil PERIMETER dari R adalah : %d", PERIMETER);
	
	return 0;
}
