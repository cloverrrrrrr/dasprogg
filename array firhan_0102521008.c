#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total;
	int ages[5] = {49, 48, 26, 19, 16};
	int size=sizeof(ages);
	total=function_sum(ages,5);
	
	printf("total ages is : %d\n",total);
	return 0;
}
int function_sum(int array[]){
	int i,total = 0;
	int size = 5;
	for ( i = 0; i < size; i++ ) {
		total=total+array[i];
		printf("array[%d] : %d\n",i,array[i]);
	}
	return total;
	
}

